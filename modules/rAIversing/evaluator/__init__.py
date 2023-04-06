import json

from rAIversing.Engine import rAIverseEngine
from rAIversing.Ghidra_Custom_API import binary_to_c_code, import_changes_to_ghidra_project
from rAIversing.pathing import *


def eval_p2im_firmwares(ai_module):
    usable_binaries = ["Heat_Press","CNC","Gateway"]               #os.listdir(f"{BINARIES_ROOT}/p2im")
    for binary in usable_binaries:
        binary_path = f"{BINARIES_ROOT}/p2im/stripped/{binary}"
        print(f"Processing {binary}")
        if True:
            binary_to_c_code(binary_path, "ARM:LE:32:Cortex")
            raie=rAIverseEngine(ai_module, binary_path=binary_path)
            raie.load_functions()
            raie.run_recursive_rev()
            raie.export_processed(all_functions=True)

        import_changes_to_ghidra_project(binary_path)

    for binary in usable_binaries:
        binary_path = f"{BINARIES_ROOT}/p2im/original/{binary}_original"
        binary_to_c_code(binary_path, "ARM:LE:32:Cortex")


    for binary in usable_binaries:
        comparison_dict = {}
        with open(os.path.join(PROJECTS_ROOT,binary, f"{binary}.json"), "r") as f:
            reversed_functions = json.load(f)
        with open(os.path.join(PROJECTS_ROOT,f"{binary}_original", f"{binary}_original.json"), "r") as f:
            original_functions = json.load(f)

        for function, data in original_functions.items():
            reversed_key = data["entrypoint"].replace("0x","FUN_")
            if reversed_key in reversed_functions.keys():
                comparison_dict[function] = reversed_functions[reversed_key]["current_name"]
            elif f"thunk_{reversed_key}" in reversed_functions.keys():
                comparison_dict[function] = reversed_functions[f"thunk_{reversed_key}"]["current_name"]
            else:
                entrypoint = data["entrypoint"]
                found = False
                for key, value in reversed_functions.items():
                    if value["entrypoint"] == entrypoint:
                        comparison_dict[function] = value["current_name"]
                        found = True
                        break
                if not found:
                    comparison_dict[function] = "NOT FOUND"

        with open(os.path.join(PROJECTS_ROOT,binary, f"{binary}_comparison.json"), "w") as f:
            json.dump(comparison_dict, f, indent=4)