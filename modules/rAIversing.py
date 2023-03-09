from rAIversing.Engine import rAIverseEngine
from rAIversing.AI_modules.openAI_core import chatGPT
from rAIversing.evaluator import eval_p2im_firmwares



def testbench():
    #string="int function_1_00084f54() {\n\\n    int result;\n\\n    if (*PTR_PTR_DAT_000850f0 != 0 && *PTR_DAT_000850ec != '\\\\0') {\n\\n      result = (*pointer_to_function_1_00084f54)();\n\\n      return result;\n\\n    }\n\\n    return 0;\n\\n  }"
    string="\nvoid FUN_00098918(undefined4 *param_1)\n\n{\n  int iVar1;\n  \n  iVar1 = FUN_000987da(*param_1);\n  if (1 < *(byte *)(iVar1 + 8)) {\n    return;\n  }\n  *(undefined *)(iVar1 + 8) = 2;\n  FUN_000113e4(0x20000000);\n  return;\n}\n\n"
    print(string)
    out = string.replace("\\n","\n")
    print(out.replace('\\\\','\\'))

def run20819():
    raie=rAIverseEngine(chatGPT.v2_api_key(),binary_path="20819_firmware")
    raie.load_functions()
    #raie.run_recursive_rev()
    raie.cleanup()
    raie.export_processed(all_functions=True)

def evaluation():
    eval_p2im_firmwares()

def main():
    #testbench()
    #run20819()
    evaluation()






if __name__ == "__main__":
    main()
    #testbench()
    