import json

import revChatGPT.Official
from rAIversing.pathing import *
from rAIversing.AI_modules.ai_module_inteface import AiModuleInterface
import logging
import time


PROMPT_TEXT = \
    """
    create a JSON object containing the responses to the following prompts:
    new_code : first make the following code more readable without renaming variables starting with PTR, DAT or FUN and second, renaming_operations : list all renaming operations in json format with keys
    being the old names and the values the corresponding new names. display only the improved code as entry of a json file
    Do not use single quotes
    
    """


class ChatGPTModule(AiModuleInterface):
    def __init__(self):
        with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "api_key.txt")) as f:
            self.api_key = f.read()
        self.chat = revChatGPT.Official.Chatbot(self.api_key)
        self.logger = logging.getLogger("ChatGPTModule")

    def prompt(self, prompt):  # type: (str) -> str
        """Prompts the model and returns the result"""
        response = self.chat.ask(prompt)
        try:
            answer = response["choices"][0]["text"]
        except Exception as e:
            print("Error in response:")
            print(response)
            print(e)
            print(":Error in response")
            answer = ""
        return answer

    def remove_plaintext_from_response(self, response):  # type: (str) -> str
        """Removes everything from the response before the first { and after the last }"""
        return response[response.find("{"):response.rfind("}") + 1]

    def format_string_correctly(self, string):
        string = string.replace('\\', '\\\\')
        return string

    def remove_trailing_commas(self, string):
        string = string.replace(',\n}', '\n}')
        string = string.replace(',\n }', '\n }')
        string = string.replace(',\n  }', '\n  }')
        string = string.replace(',\n   }', '\n   }')
        return string

    def any_dict_to_renaming_dict(self, any_dict):
        pass


    def process_response(self, response_string_orig):
        response_string = self.remove_plaintext_from_response(response_string_orig)
        response_string = self.format_string_correctly(response_string)
        response_string = self.remove_trailing_commas(response_string)
        if '```\n\n```' in response_string:
            response_string = response_string.replace('```\n\n```', '\n####\n')
            splits = response_string.split('####')
            temp_dict = {}
            try:
                rename_dict = json.loads(splits[0])
                temp_dict["code"] = splits[1]
            except Exception as e:
                pass
            try:
                rename_dict = json.loads(splits[1])
                temp_dict["code"] = splits[0]
            except Exception as e:
                pass

            # TODO: check if temp_dict is empty
        if '```' in response_string:
            response_string = response_string.replace('```', '')
        if '`' in response_string:
            response_string = response_string.replace('`', '"')

        response_dict = json.loads(response_string, strict=False)
        return response_dict, response_string

    def prompt_with_renaming(self, input_code,retries=5):  # type: (str,int) -> (str, dict)
        """Prompts the model and returns the result and a dict of renamed Names"""
        full_prompt = PROMPT_TEXT + input_code
        renaming_dict = {}
        response_string = ""
        for i in range(0,retries):
            try:
                response_string = self.prompt(full_prompt)
                with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "temp", "temp_response.json"), "w") as f:
                    f.write(response_string)
                response_dict, response_string = self.process_response(response_string)
                break
            except Exception as e:
                if i >= retries-1:
                    raise Exception(f"No valid response from model after {retries} retries")
                if "Expecting value: line 1 column 1 (char 0)" in str(e) or "Unterminated string starting at:" in str(e):
                    self.logger.warning(f"Got incomplete response from model, retrying {i+1}/{retries}")
                    continue
                if "The server is overloaded or not ready yet." in str(e):
                    self.logger.warning(f"Got server overload from model, retrying {i+1}/{retries}")
                    time.sleep(3)
                    continue

                if "max_tokens" in str(e):
                    raise Exception("Function too long, skipping!")
                else:
                    print(e)
                    print(response_string)
                continue


        if len(response_dict) == 2:
            for key in response_dict:
                if "code" in key:
                    improved_code = response_dict[key]
                else:
                    if type(response_dict[key]) == dict:
                        for old, new in response_dict[key].items():
                            renaming_dict[old] = new
                    elif type(response_dict[key]) == list:
                        for entry in response_dict[key]:
                            for old, new in entry.items():
                                renaming_dict[old] = new

        elif len(response_dict) == 3:
            for key in response_dict:
                if "code" in key or "Code" in key:
                    improved_code = response_dict[key]
                elif "old" in key:
                    old_key = key
                elif "new" in key:
                    new_key = key
                else:
                    print(renaming_dict)
                    raise Exception("Invalid response format")
            if type(response_dict[old_key]) == list and type(response_dict[new_key]) == list:
                for old, new in zip(response_dict[old_key], response_dict[new_key]):
                    renaming_dict[old] = new
            elif type(response_dict[old_key]) == dict and response_dict[new_key] == response_dict[old_key]:
                renaming_dict = response_dict[old_key]

        return improved_code, renaming_dict

    def testbench(self):

        with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "temp", "temp.json"), "r") as f:
            response = f.read()
        response_dict, response_string = self.process_response(response)
        return response_dict, response_string


