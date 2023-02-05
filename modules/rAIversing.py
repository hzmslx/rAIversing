import json
import logging

from rAIversing.pathing import *
from rAIversing.CExporter import CExporter
from rAIversing.CExporter import ghidra_commander
from rAIversing.AI_modules.openAI_core import chatGPT


class rAIverseEngine():
    def __init__(self,ai_module):
        self.ai_module = ai_module # type: chatGPT.ChatGPTModule
        self.ghidra_commander = ghidra_commander.HeadlessAnalyzerWrapper()
        self.functions = {}
        self.logger = logging.getLogger("rAIverseEngine")
        self.logger.setLevel(logging.DEBUG)
        logging.basicConfig()
        self.logger.info("rAIverseEngine started")

    def get_lowest_function_layer(self,functions):
        lflList = []
        for name, data in self.functions.items():
            if data["improved"] == False:
                if len(data["code"].split("FUN_"))== 2:
                    lflList.append(name)
        return lflList

    def rename_for_all_functions(self,renaming_dict):
        for name, data in self.functions.items():
            for old, new in renaming_dict.items():
                data["code"] = data["code"].replace(old, new)

    def check_all_improved(self):
        for name, data in self.functions.items():
            if data["improved"] == False:
                return False
        return True


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
        with open(f'{PROJECTS_ROOT}/20819_firmware/20819_firmware.json','r') as f:
            self.functions = json.load(f)
        self.logger.info("Starting recursive improvement")

        self.run_recursive_rev()
        with open(f'{PROJECTS_ROOT}/20819_firmware/20819_firmware_out.c','w') as f:
            for name, data in self.functions.items():
                f.write(data["code"])


    def run_recursive_rev(self):
        function_layer = 0
        while not self.check_all_improved():
            self.logger.info(f"Getting layer {function_layer}")
            lfl = self.get_lowest_function_layer(self.functions)
            self.logger.info(f"Starting layer {function_layer} with {len(lfl)} functions")
            for name in lfl:
                try:
                    self.logger.info(f"Improving function {name}")
                    improved_code, renaming_dict = self.ai_module.prompt_with_renaming(self.functions[name]["code"])
                    self.logger.info(f"Improved function {name}")
                    self.functions[name]["code"] = improved_code
                    self.functions[name]["improved"] = True
                    self.rename_for_all_functions(renaming_dict)
                except Exception as e:
                    self.logger.error(f"Error in function {name}: {e}")


def main():
    #CExporter.CExporting()
    #CExporter.run20819()
    #chatGPT.ChatGPTTest()
    rAIverseEngine(chatGPT.ChatGPTModule()).run20819()






if __name__ == "__main__":
    main()
