from rAIversing.Engine import rAIverseEngine
from rAIversing.Ghidra_Custom_API import binary_to_c_code, import_changes_to_ghidra_project
from rAIversing.pathing import *


def eval_p2im_firmwares(ai_module):
    usable_binaries = ["Heat_Press"]               #os.listdir(f"{BINARIES_ROOT}/p2im")
    for binary in usable_binaries:
        binary_path = f"{BINARIES_ROOT}/p2im/{binary}"
        print(f"Processing {binary}")
        if True:
            binary_to_c_code(binary_path, "ARM:LE:32:Cortex")
            raie=rAIverseEngine(ai_module, binary_path=binary_path)
            raie.load_functions()
            raie.run_recursive_rev()
            raie.export_processed(all_functions=True)

        import_changes_to_ghidra_project(binary_path)


        #raie.cleanup()
