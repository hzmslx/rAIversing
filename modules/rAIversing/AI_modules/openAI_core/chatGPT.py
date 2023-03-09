import json

import revChatGPT.V1
import revChatGPT.V2
import revChatGPT.V3
from rAIversing.pathing import *
from rAIversing.AI_modules.ai_module_inteface import AiModuleInterface
from rAIversing.utils import extract_function_name
import logging
import time
import asyncio

PROMPT_TEXT = \
    """
    
    Respond with a single JSON object containing the following keys and values:
    improved_code : make the following code more readable without changing variables starting with PTR_ , DAT_ or FUN_
    renaming_operations : list all changes in json format with keys being the old names and the values the corresponding new names.
    Do not use single quotes
    
    Original code:
    """


def assemble_prompt_v1(code):
    return PROMPT_TEXT + code


def assemble_prompt_v2(code):
    pre = \
        """
You have been given a piece of code which needs to be reverse engineered and improved. The original code is as follows:
        
"""
    post = \
"""

Your task is to create an improved and more readable version of the code without changing variables starting with "PTR_" or "DAT_".
If possible give the function a better name, otherwise leave it as it is. (Functions start with "FUN_") 

Your response should include the following:
                
1. The improved code, which should be more readable and easier to understand. Do not use single characters for variable names.
2. A dictionary that maps the original names of the function, parameters and variables to their new names in the improved code.

Your response should be in the following format:

{
"improved_code": "<your escaped and improved code here>",
"renaming_operations": {
"<original_function_name>": "<new_function_name>",
"<original_parameter_name_1>": "<new_parameter_name_1>",
"<original_parameter_name_2>": "<new_parameter_name_2>",
...
"<original_variable_name_1>": "<new_variable_name_1>",
"<original_variable_name_2>": "<new_variable_name_2>",
...
}
}
Do not use single quotes,or any other plaintext outside of the JSON object.
"""

    return pre + code + post


def access_token():
    chat = ChatGPTModule()
    chat.init_access_token()
    return chat


def api_key():
    chat = ChatGPTModule()
    chat.init_api()
    return chat


def v2_api_key():
    chat = ChatGPTModule()
    chat.init_v2()
    return chat


class ChatGPTModule(AiModuleInterface):
    def __init__(self):
        self.chat = None
        self.api_key = None
        self.access_token = None
        self.v2_api_key = None
        self.logger = logging.getLogger("ChatGPTModule")

    def init_v2(self):
        with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "v2_api_key.txt")) as f:
            self.v2_api_key = f.read()
        self.chat = revChatGPT.V2.Chatbot(self.v2_api_key)

    def init_api(self):
        with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "api_key.txt")) as f:
            self.api_key = f.read()
        self.chat = revChatGPT.V3.Chatbot(api_key=self.api_key)

    def init_access_token(self):
        with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "access_token.txt")) as f:
            self.access_token = f.read()
        self.chat = revChatGPT.V1.Chatbot(config={"access_token": self.access_token})

    def prompt(self, prompt):  # type: (str) -> str
        """Prompts the model and returns the result"""

        if self.v2_api_key is not None:
            async def async_prompt(prompt):
                response = ""
                async for line in self.chat.ask(prompt=prompt):
                    response += line["choices"][0]["text"]
                return response

            answer = asyncio.run(async_prompt(prompt))


        elif self.access_token is not None:
            try:
                response = self.chat.ask(prompt)
                print(response)
                for data in response:
                    answer = data["message"]
            except Exception as e:
                print(f"Error {e} in response:\n>>>>>>>>")
                print(dict(response))
                print("<<<<<<<<")
        return answer.replace("<|im_sep|>", "")

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

    def postprocess_code(self, code):
        out = code.replace("\n\\n", "\n")
        return out.replace('\\\\', '\\')

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
                self.logger.error("Ended Up here AAA")
                pass
            try:
                rename_dict = json.loads(splits[1])
                temp_dict["code"] = splits[0]
            except Exception as e:
                self.logger.error("Ended Up here BBB")
                pass

            # TODO: check if temp_dict is empty
        if '```' in response_string:
            response_string = response_string.replace('```', '')
        if '`' in response_string:
            response_string = response_string.replace('`', '"')
        ideas_left = True
        while ideas_left:
            try:
                response_dict = json.loads(response_string, strict=False)
                break
            except Exception as e:
                if """Expecting ',' delimiter:""" in str(e):
                    print(e)
                    print("###### RESPONSE START 2######")
                    print(response_string)
                    print("###### RESPONSE END 2######")
                raise Exception(e)
        return response_dict, response_string_orig

    def prompt_with_renaming(self, input_code, retries=5):  # type: (str,int) -> (str, dict)
        """Prompts the model and returns the result and a dict of renamed Names"""
        full_prompt = assemble_prompt_v2(input_code)
        renaming_dict = {}
        response_string = ""
        #print(full_prompt)

        for i in range(0, retries):
            try:
                response_string = self.prompt(full_prompt)
                #print(response_string)
                with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "temp", "temp_response.json"), "w") as f:
                    f.write(response_string)
                response_dict, response_string = self.process_response(response_string)
                break
            except Exception as e:
                if i >= retries - 1:
                    raise Exception(f"No valid response from model after {retries} retries! Function was: {extract_function_name(input_code)}")
                if "Expecting value: line 1 column 1 (char 0)" in str(e) or "Unterminated string starting at:" in str(
                        e):
                    self.logger.warning(f"Got incomplete response from model, retrying {i + 1}/{retries}")
                    if len(full_prompt)//2 > len(response_string) > len(full_prompt)//4:
                        self.logger.warning(f"Response was: {response_string}")
                        self.logger.warning(f"Prompt was: {full_prompt}")
                    if len(response_string.split("\n"))<3:
                        self.logger.warning(f"Function was: {extract_function_name(input_code)}")
                    continue
                if "The server is overloaded or not ready yet." in str(e):
                    self.logger.warning(f"Got server overload from model, aborting")
                    exit(-1)

                if "max_tokens" in str(e):
                    raise Exception("Function too long, skipping!")
                else:
                    print(e)
                    print("###### RESPONSE START ######")
                    print(response_string)
                    print("###### RESPONSE END ######")
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

        elif len(response_dict) == 1:
            print(response_dict)
            raise Exception("Only one Key in response dict")

        improved_code = self.postprocess_code(improved_code)
        if improved_code == input_code:
            raise Exception("No change")

        return improved_code, renaming_dict

    def testbench(self):

        with open(os.path.join(AI_MODULES_ROOT, "openAI_core", "temp", "temp.json"), "r") as f:
            response = f.read()
        response_dict, response_string = self.process_response(response)
        return response_dict, response_string
