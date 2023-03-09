from rAIversing.pathing import *
import os, sys

from rAIversing.AI_modules.openAI_core import chatGPT
from rAIversing.CExporter.CExporter import binary_to_c_code
from rAIversing.Engine import rAIverseEngine


def eval_p2im_firmwares(use_access_token=True):    #For now to prevent unwanted costs but also doesn't work with the current model
    usable_binaries = ["Heat_Press"]               #os.listdir(f"{BINARIES_ROOT}/p2im")
    for binary in usable_binaries:
        binary_path = f"{BINARIES_ROOT}/p2im/{binary}"
        print(f"Processing {binary}")
        binary_to_c_code(binary_path, "ARM:LE:32:Cortex")
        raie=rAIverseEngine(chatGPT.v2_api_key(), binary_path=binary_path)
        raie.load_functions()
        raie.run_recursive_rev()
        #raie.cleanup()
        raie.export_processed(all_functions=True)
