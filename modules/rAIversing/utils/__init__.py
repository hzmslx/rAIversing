import json
import os, sys
from rAIversing.pathing import *
import tiktoken
import random
import string


class MaxTriesExceeded(Exception):
    """Raised when the max tries is exceeded"""


class NoResponseException(Exception):
    """Raised when no response is received"""


def check_and_fix_bin_path(binary_path):
    if os.path.abspath(binary_path) == binary_path:
        return binary_path
    else:
        if os.path.isfile(os.path.join(BINARIES_ROOT, binary_path)):
            return os.path.join(BINARIES_ROOT, binary_path)
        else:
            raise FileNotFoundError(f"Binary {binary_path} not found in {BINARIES_ROOT}")


def extract_function_name(code):
    if "WARNING: Removing unreachable block (ram," in code:
        code = code.split("\n\n")[1].split("(")[0].split("\n")[-1].split(" ")[-1]
        return code

    return code.split("(")[0].split(" ")[-1]


def generate_function_name(code, name):
    new_name = f"{extract_function_name(code)}_{name.replace('FUN_', '')}"
    return code.replace(extract_function_name(code), new_name), new_name


def check_and_fix_double_function_renaming(code, renaming_dict, name):
    if name in renaming_dict.keys():
        present_name = extract_function_name(code)
        if present_name != renaming_dict[name]:
            if present_name not in renaming_dict[name]:
                # print(f"Replacing {present_name} with {renaming_dict[name]} in {name}")
                pass
            code = code.replace(present_name, renaming_dict[name])
    return code


def calc_used_tokens(function):
    enc = tiktoken.encoding_for_model("text-davinci-002")
    return len(enc.encode(function))




def get_random_string(length):
    # choose from all lowercase letter
    letters = string.ascii_uppercase
    result_str = ''.join(random.choice(letters) for i in range(length))
    return result_str


def check_do_nothing(code):
    code = "{" + code.split("{")[1].split("}")[0] + "}"
    code = code.replace(" ", "").replace("\n", "").rstrip().strip()
    if "{return;}" == code:
        return True
    else:
        return False


def clear_extra_data(response, e):
    # Extra data: line 8 column 1 (char 177)
    # remove everything after char 177 from response
    last_del = 0
    while last_del != int(e.split("char ")[1].split(")")[0]):
        last_del = int(e.split("char ")[1].split(")")[0])
        response = response[:last_del]
        try:
            response_dict = json.loads(response, strict=False)
            return response_dict
        except json.decoder.JSONDecodeError as a:
            e = str(a)


def split_response(response_dict):
    renaming_dict = {}
    response_string = ""
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

    return improved_code, renaming_dict


def check_valid_code(code):
    if "{" not in code or "}" not in code or "(" not in code or ")" not in code:
        return False
    else:
        return True
