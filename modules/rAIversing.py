from rAIversing.rAIverseEngine import rAIverseEngine
from rAIversing.AI_modules.openAI_core import chatGPT




def testbench():
    string="uint getLowest16Bits(void) {\\n  return _DAT_00338138 & 0xffff;\\n}"
    print(string)
    print(string.replace("\\n","\n"))


def main():
    raie=rAIverseEngine(chatGPT.ChatGPTModule(),binary_path="20819_firmware")
    raie.load_functions()
    raie.run_recursive_rev()
    #raie.export_processed()







if __name__ == "__main__":
    main()
    #testbench()
    