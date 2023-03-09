import os, sys
from rAIversing.pathing import *
import tiktoken


def check_and_fix_bin_path(binary_path):
    if os.path.abspath(binary_path) == binary_path:
        return binary_path
    else:
        if os.path.isfile(os.path.join(BINARIES_ROOT, binary_path)):
            return os.path.join(BINARIES_ROOT, binary_path)
        else:
            raise FileNotFoundError(f"Binary {binary_path} not found in {BINARIES_ROOT}")


def undo_bad_renaming(renaming_dict, code):
    for old, new in renaming_dict.items():
        if "PTR" in old or "DAT" in old:
            code = code.replace(new, old)
        if "FUN_" in old and ("reverse" in new and "engineer" in new.lower()):
            code = code.replace(new, old)
    return code


def extract_function_name(code):
    if "WARNING: Removing unreachable block (ram," in code:
        code = code.split("\n\n")[1].split("(")[0].split("\n")[-1].split(" ")[-1]
        return code


    return code.split("(")[0].split(" ")[-1]
def generate_function_name(code,name):
    return f"{extract_function_name(code)}_{name.replace('FUN_', '')}"


def calc_used_tokens(function):
    enc = tiktoken.encoding_for_model("text-davinci-002")
    return len(enc.encode(function))