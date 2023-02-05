import json

import revChatGPT.Official
from rAIversing.pathing import *
from rAIversing.AI_modules.ai_module_inteface import AiModuleInterface

PROMPT_TEXT = \
    """
    format your response as json file
    
    first make the following code more readable without renaming variables starting with PTR_, DAT_, FUN_ and second list all renaming operations in json format with keys
    being the old names and the values the corresponding new names. display only the improved code as entry of a json file
    
    """


class ChatGPTModule(AiModuleInterface):
    def __init__(self):
        with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "api_key.txt")) as f:
            self.api_key = f.read()
        self.chat = revChatGPT.Official.Chatbot(self.api_key)

    def prompt(self, prompt):  # type: (str) -> str
        """Prompts the model and returns the result"""
        response = self.chat.ask(prompt)
        try:
            answer = response["choices"][0]["text"]
        except Exception as e:
            print(response)
            print(e)
            answer = ""
        return answer

    def remove_plaintext_from_response(self, response):  # type: (str) -> str
        """Removes the plaintext from the response"""
        #TODO: implement
        pass

    def any_dict_to_renaming_dict(self, any_dict):
        pass


    def prompt_with_renaming(self, input_code):  # type: (str) -> (str, dict)
        """Prompts the model and returns the result and a dict of renamed Names"""
        full_prompt = PROMPT_TEXT + input_code
        renaming_dict = {}
        for i in range(10):
            try:
                response_string = self.prompt(full_prompt)
                with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "tests", "test_response.json"), "w") as f:
                    f.write(response_string)
                if '```\n\n```' in response_string:
                    response_string = response_string.replace('```\n\n```', '\n####\n')
                    splits = response_string.split('####')
                    temp_dict={}
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

                    #TODO: check if temp_dict is empty


                if '```' in response_string:
                    response_string = response_string.replace('```', '')
                if '`' in response_string:
                    response_string = response_string.replace('`', '"')
                response_dict = json.loads(response_string)
                break
            except Exception as e:
                print(response_string)
                print(e)
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


def ChatGPTTest():
    chat = ChatGPTModule()
    with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "tests", "test_code.c")) as f:
        test_code = f.read()
    improved_code, renaming_dict = chat.prompt_with_renaming(test_code)
    print(improved_code)
    print(renaming_dict)
