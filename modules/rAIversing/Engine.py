import json
import logging
import os

from rich.console import Console

from rAIversing.AI_modules.openAI_core import chatGPT
from rAIversing.pathing import PROJECTS_ROOT
from rAIversing.utils import check_and_fix_bin_path, extract_function_name, \
    generate_function_name, MaxTriesExceeded, check_and_fix_double_function_renaming, \
    check_do_nothing, get_random_string


class rAIverseEngine:
    def __init__(self, ai_module, json_path="", binary_path="",max_tokens=3000):
        self.max_tokens = max_tokens
        self.ai_module = ai_module  # type: chatGPT.ChatGPTModule
        self.functions = {}
        self.used_tokens = 0
        self.current_fn_lookup = {}
        self.original_fn_lookup = {}
        self.logger = logging.getLogger("rAIverseEngine")
        self.logger.setLevel(logging.DEBUG)
        self.path_to_binary = check_and_fix_bin_path(binary_path)
        self.binary_name = os.path.basename(binary_path).replace(".", "_")
        self.path_to_functions_file = json_path if json_path != "" else f"{PROJECTS_ROOT}/{self.binary_name}/{self.binary_name}.json"
        self.skip_failed_functions = True  # TODO make this a parameter
        self.retries = 5  # TODO make this a parameter
        logging.basicConfig()
        self.console = Console(soft_wrap=True)

    def load_functions(self):
        if os.path.isfile(self.path_to_functions_file):
            with open(self.path_to_functions_file) as f:
                self.functions = json.load(f)
        elif os.path.isfile(os.path.join(f"{PROJECTS_ROOT}", self.path_to_functions_file)):
            self.path_to_functions_file = os.path.join(f"{PROJECTS_ROOT}", self.path_to_functions_file)
            with open(self.path_to_functions_file) as f:
                self.functions = json.load(f)
        else:
            self.logger.error("No functions.json found")
            raise Exception(f"Path to functions.json not found: {self.path_to_functions_file}")

        for name, data in self.functions.items():
            current_name = data["current_name"] if "current_name" in data.keys() else name
            self.functions[name]["current_name"] = current_name
            self.current_fn_lookup[name] = current_name
            self.original_fn_lookup[current_name] = name

    def save_functions(self):
        with open(self.path_to_functions_file, "w") as f:
            json.dump(self.functions, f, indent=4)

    def get_lowest_function_layer(self):
        lflList = []
        for name, data in self.functions.items():
            if data["improved"] == False and not data["skipped"]:
                if len(data["code"].split("FUN_")) == 2 or "called" not in data.keys() or len(data["called"]) == 0:
                    lflList.append(name)
        return lflList

    def get_missing_functions(self):
        missing = []
        for name, data in self.functions.items():
            if not data["improved"] and not data["skipped"]:
                missing.append(name)
        return missing

    def fix_function_name(self, code, rename_dict, function_name):
        if function_name not in code:
            if function_name in rename_dict.keys():
                new_name = f"{rename_dict[function_name]}_{function_name.replace('FUN_', '')}"
                self.functions[function_name]["current_name"] = new_name
                code.replace(rename_dict[function_name], new_name)

    def rename_for_all_functions(self, renaming_dict):
        for name, data in self.functions.items():
            for old, new in renaming_dict.items():
                if old == new:
                    continue
                if old == "" or new == "":
                    #self.logger.error(f"Empty string in renaming dict: >{old}< -> >{new}<")
                    continue
                try:
                    val = hex(int(old, 16))
                    continue
                except:
                    pass
                if "[" in old or "(" in old or "{" in old:
                    continue
                if "Var" in old or "param" in old or "local" in old or "PTR" in old or "DAT" in old or "undefined" in old:
                    continue

                if "FUN_" in new:
                    self.logger.warning(f"Skipping renaming of {old} to {new}")
                    continue
                if not "FUN_" in old:
                    continue
                data["code"] = data["code"].replace(old, new)


    def undo_bad_renaming(self, renaming_dict, code,original_code):
        """This function is used to undo bad renaming of functions that are not called by other hidden functions.
        As there are no guarantees that the Ai module won't rename already renamed functions we check if the old name,
        is known as a current name of a function. If it is we undo the renaming by the following steps:
        1. we sort the renaming dict by the length of the new name
            This way we can undo the renaming of the longest names first and avoid renaming of already renamed functions
        2. We replace the new name with a random string that is not used in the code and therefore won't be overwritten
        3. We replace the random string with the old name

        If multiple functions are renamed to the same name we can rely on the fact that the sorting is stable,
        and the entries with the same length will be sorted by the order they were added to the dict which is the order
        in wich they occurred in the code(Just AI things).
        """


        current_names = self.current_fn_lookup.values()
        new_names = list(renaming_dict.values())
        old_names = list(renaming_dict.keys())
        to_be_handled_duplicates = []
        temporary_remapping = {}
        for old, new in renaming_dict.items():
            if "FUN_" in old:
                name=old
        renaming_dict_sorted=dict(sorted(renaming_dict.items(), key=lambda item: (-len(item[1]), item[1])))
        #print("")
        #print(renaming_dict_sorted)
        #print("")
        for old, new in renaming_dict_sorted.items():

            if "FUN_" in old:
                name=old
            if "PTR" in old or "DAT" in old:
                code = code.replace(new, old)
            if check_do_nothing(code) and "FUN_" in old:
                if "nothing" not in new.lower():
                    code = code.replace(new, "do_nothing")
                    print(f"Replaced {new} with do_nothing in {old}")
            elif "FUN_" in old and ("reverse" in new and "engineer" in new.lower()):
                print(f"not replacing reverse engineer in {old}")
                print(code)
            if old in current_names and "FUN_" not in old and old not in code:
                #self.logger.warning(f"(Currently not)Reversing potential false renaming of {old} to {new} in {self.get_original_name(old)}")
                #print(new)
                rand_str = get_random_string(10)
                temporary_remapping[rand_str] = old
                if new_names.count(new) > 1:
                    code = code.replace(new, rand_str,1)
                    self.logger.warning(f"Multiple old names for {new} in {name}")
                else:
                    code = code.replace(new, rand_str)
                    continue

        for temp, intended in temporary_remapping.items():
            code = code.replace(temp, intended)

        return code


    def check_all_improved(self):
        for name, data in self.functions.items():
            if not data["improved"]:
                return False
        return True


    def count_processed(self):
        count = 0
        for name, data in self.functions.items():
            if data["improved"] == True or data["skipped"] == True:
                count += 1
        return count


    def run_recursive_rev(self):
        function_layer = 0
        overall_processed_functions = self.count_processed()
        skipped_remaining_functions = False
        while not self.check_all_improved():
            self.console.log(f"[bold yellow]Gathering functions for layer [/bold yellow]{function_layer}")
            lfl = self.get_lowest_function_layer()
            if len(lfl) == 0:
                self.logger.warning(f"No functions found in layer {function_layer}")

                self.console.print(f"These functions remain {self.get_missing_functions()}")
                if skipped_remaining_functions:
                    self.console.log(f"Breaking as no options are left! (Maybe recursion?)")
                    break
                self.console.print(f"Skipping too big functions....")
                for name in self.get_missing_functions():
                    if self.ai_module.calc_used_tokens(self.ai_module.assemble_prompt(self.functions[name]["code"])) > self.max_tokens:
                        new_name = f"{name.replace('FUN_', 'SKIPPED_')}"
                        renaming_dict = {name: new_name}
                        improved_code = self.functions[name]["code"].replace(name, new_name)
                        self.functions[name]["skipped"] = True
                        self.functions[name]["code"] = improved_code
                        self.functions[name]["current_name"] = new_name
                        self.functions[name]["renaming"] = renaming_dict
                        self.rename_for_all_functions(renaming_dict)


                skipped_remaining_functions = True
                continue
            self.console.print(f"Starting layer {function_layer} with {len(lfl)} of {len(self.functions)} functions. Overall processed functions: {overall_processed_functions}/{len(self.functions)} Used tokens: {self.used_tokens}")
            function_layer += 1
            processed_functions = 0
            for name in lfl:
                current_cost = 2*self.ai_module.calc_used_tokens(self.ai_module.assemble_prompt(self.functions[name]["code"]))
                if current_cost > self.max_tokens:
                    self.console.print(f"Function [blue]{name}[/blue] is too big [red]{current_cost}[/red] Skipping")
                    new_name = f"{name.replace('FUN_', 'SKIPPED_')}"
                    renaming_dict = {name: new_name}
                    improved_code = self.functions[name]["code"].replace(name, new_name)
                    self.functions[name]["skipped"] = True
                else:
                    try:
                        self.console.print(f"{lfl.index(name)}/{len(lfl)} | Improving function [blue]{name}[/blue] for {current_cost} Tokens | Used tokens: {self.used_tokens}")
                        self.used_tokens+= current_cost
                        to_be_improved_code = self.functions[name]["code"]
                        improved_code, renaming_dict = self.ai_module.prompt_with_renaming(to_be_improved_code,self.retries)
                        improved_code = self.undo_bad_renaming(renaming_dict, improved_code,to_be_improved_code)
                        improved_code = check_and_fix_double_function_renaming(improved_code,renaming_dict,name)
                        improved_code,new_name = generate_function_name(improved_code, name)
                        renaming_dict[name] = new_name
                        self.functions[name]["improved"] = True
                    except MaxTriesExceeded as e:
                        self.console.print(f"[bold red]Max tries exceeded[/bold red] in function [red]{name}[/red]")
                        if self.skip_failed_functions:
                            new_name = f"{name.replace('FUN_', 'SKIPPED_')}"
                            renaming_dict = {name: new_name}
                            improved_code = self.functions[name]["code"].replace(name, new_name)
                            self.functions[name]["skipped"] = True
                    except Exception as e:
                        self.console.print(f"[bold red]Error[/bold red] in function [red]{name}[/red]: {e}")
                        raise Exception(e)
                self.functions[name]["code"] = improved_code
                self.functions[name]["current_name"] = new_name
                self.functions[name]["renaming"] = renaming_dict
                self.rename_for_all_functions(renaming_dict)
                processed_functions += 1
                if processed_functions % 5 == 0:
                    self.save_functions()
                    self.console.log(f"Saved functions after {processed_functions}/{len(lfl)} functions")
            self.save_functions()
            self.console.log(f"Saved functions after {processed_functions}/{len(lfl)} functions")
            overall_processed_functions += processed_functions

    def export_processed(self, all_functions=False, output_file=""):
        if output_file == "":
            output_file = self.path_to_functions_file.rsplit(".", 1)[0] + "_processed.c"
        with open(output_file, 'w') as f:
            for name, data in self.functions.items():
                if data["improved"] or all_functions:
                    f.write(f'\n// {name} {data["entrypoint"]}\n')
                    f.write(data["code"].replace("\\\\", "\\").replace("\\n", "\n"))

    def get_current_name(self, function_name):
        return self.current_fn_lookup[function_name]

    def get_original_name(self, current_name):
        try:
            return self.original_fn_lookup[current_name]
        except KeyError:
            print(f"KeyError: {current_name} not found in Lookup")
    def update_current_name(self, function_name, current_name):
        old_current_name = self.current_fn_lookup[function_name]
        self.current_fn_lookup[function_name] = current_name
        self.original_fn_lookup[current_name] = function_name
        del self.original_fn_lookup[old_current_name]

    def cleanup(self):
        self.load_functions()
        for name, data in self.functions.items():
            data["code"] = data["code"].replace("\n\\n", "\n")

            current_name = extract_function_name(data["code"])
            if name == current_name:
                continue
            else:
                address_postfix = data["entrypoint"].split("x")[1]
                if not current_name.endswith(address_postfix):
                    new_name = f"{current_name}_{address_postfix}"
                    self.functions[name]["current_name"] = new_name
                    self.functions[name]["code"] = data["code"].replace(current_name, new_name)
                    self.current_fn_lookup[name] = new_name
                    self.original_fn_lookup[new_name] = name
                else:
                    continue
        self.rename_for_all_functions(self.current_fn_lookup)
        self.save_functions()

    def testbench(self):
        print(self.ai_module.calc_used_tokens(self.ai_module.assemble_prompt("")))


        self.cleanup()
        # self.ai_module.testbench()
