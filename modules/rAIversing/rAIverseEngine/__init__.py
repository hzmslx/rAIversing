import json
import logging
import os

from rAIversing.AI_modules.openAI_core import chatGPT
from rAIversing.CExporter import ghidra_commander
from rAIversing.pathing import PROJECTS_ROOT, BINARIES_ROOT, GHIDRA_SCRIPTS
from rAIversing.utils import check_and_fix_bin_path


class rAIverseEngine():
    def __init__(self, ai_module, json_path="", binary_path=""):
        self.ai_module = ai_module  # type: chatGPT.ChatGPTModule
        self.ghidra_commander = ghidra_commander.HeadlessAnalyzerWrapper()
        self.functions = {}
        self.logger = logging.getLogger("rAIverseEngine")
        self.logger.setLevel(logging.DEBUG)
        self.path_to_binary = check_and_fix_bin_path(binary_path)
        self.binary_name = os.path.basename(binary_path).replace(".", "_")
        self.path_to_functions_file = json_path if json_path != "" else f"{PROJECTS_ROOT}/{self.binary_name}/{self.binary_name}.json"
        self.skip_failed_functions = True  # TODO make this a parameter
        self.retries = 5  # TODO make this a parameter
        logging.basicConfig()

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

    def save_functions(self):
        with open(self.path_to_functions_file, "w") as f:
            json.dump(self.functions, f, indent=4)

    def get_lowest_function_layer(self, functions):
        lflList = []
        for name, data in self.functions.items():
            if data["improved"] == False and not data["skipped"]:
                if len(data["code"].split("FUN_")) == 2:
                    lflList.append(name)
        return lflList

    def fix_function_name(self, code, rename_dict, function_name):
        if function_name not in code:
            if function_name in rename_dict.keys():
                new_name = f"{rename_dict[function_name]}_{function_name.replace('FUN_', '')}"
                self.functions[function_name]["current_name"] = new_name
                code.replace(rename_dict[function_name], new_name)

    def rename_for_all_functions(self, renaming_dict, function_name):
        for name, data in self.functions.items():
            for old, new in renaming_dict.items():
                if old == new:
                    continue
                if "Var" in old or "param" or "local" in old or "PTR" in old or "DAT" in old or "undefined" in old:
                    continue
                data["code"] = data["code"].replace(old, new)

    def undo_PTR_DAT_renaming(self, renaming_dict, code):
        for old, new in renaming_dict.items():
            if "PTR" in old or "DAT" in old:
                code = code.replace(new, old)
        return code

    def check_all_improved(self):
        for name, data in self.functions.items():
            if data["improved"] == False:
                return False
        return True

    def run_reversing_only(self):
        self.logger.info("Starting rAIverseEngine")
        self.load_functions()
        self.logger.info("Loaded functions")

    def count_improved(self):
        count = 0
        for name, data in self.functions.items():
            if data["improved"] == True:
                count += 1
        return count

    def run20819(self):
        if False:
            self.ghidra_commander.import_file(f'{BINARIES_ROOT}/20819_firmware')
            self.ghidra_commander.project_location(f'{PROJECTS_ROOT}') \
                .project_name('20819_firmware') \
                .postScript(f'ExtractCcode.py') \
                .scriptPath(f'{GHIDRA_SCRIPTS}') \
                .deleteProject() \
                .log(f'{PROJECTS_ROOT}/log') \
                .processor("ARM:LE:32:Cortex") \
                .scriptlog(f'{PROJECTS_ROOT}/scriptlog') \
                .run()
        self.logger.info("Ghidra finished")
        self.logger.info("Loading functions")
        self.path_to_functions_file = f'{PROJECTS_ROOT}/20819_firmware/20819_firmware.json'
        self.load_functions()
        self.logger.info("Starting recursive improvement")

        self.run_recursive_rev()
        with open(f'{PROJECTS_ROOT}/20819_firmware/20819_firmware_out.c', 'w') as f:
            for name, data in self.functions.items():
                f.write(data["code"])

    def run_recursive_rev(self):
        function_layer = 0
        overall_processed_functions = self.count_improved()
        while not self.check_all_improved():
            self.logger.info(f"Getting layer {function_layer}")
            lfl = self.get_lowest_function_layer(self.functions)
            self.logger.info(
                f"Starting layer {function_layer} with {len(lfl)} of {len(self.functions)} functions. Overall processed functions: {overall_processed_functions}/{len(self.functions)}")
            function_layer += 1
            processed_functions = 0
            for name in lfl:
                try:
                    self.logger.info(f"Improving function {name} progress {lfl.index(name)}/{len(lfl)}")
                    improved_code, renaming_dict = self.ai_module.prompt_with_renaming(self.functions[name]["code"],
                                                                                       self.retries)
                    improved_code = self.undo_PTR_DAT_renaming(renaming_dict, improved_code)
                    self.functions[name]["code"] = improved_code
                    self.functions[name]["improved"] = True
                    self.functions[name]["renaming"] = renaming_dict
                    self.rename_for_all_functions(renaming_dict, name)
                except Exception as e:
                    self.logger.error(f"Error in function {name}: {e}")
                    if self.skip_failed_functions:
                        self.functions[name]["skipped"] = True
                processed_functions += 1
                if processed_functions % 10 == 0:
                    self.save_functions()
                    self.logger.info(f"Saved functions after {processed_functions}/{len(lfl)} functions")
            overall_processed_functions += processed_functions

    def export_processed(self, all_functions=False, output_file=""):
        if output_file == "":
            output_file = self.path_to_functions_file.rsplit(".", 1)[0] + "_processed.c"
        with open(output_file, 'w') as f:
            for name, data in self.functions.items():
                if data["improved"] or all_functions:
                    f.write(f'// {name} {data["entrypoint"]}\n')
                    f.write(data["code"].replace("\\\\", "\\"))

    def testbench(self):
        self.ai_module.testbench()
