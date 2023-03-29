import json
import argparse

from rAIversing.Engine import rAIverseEngine
from rAIversing.AI_modules.openAI_core import chatGPT
from rAIversing.Ghidra_Custom_API import binary_to_c_code, import_changes_to_ghidra_project, existing_project_to_c_code, \
    import_changes_to_existing_project
from rAIversing.evaluator import eval_p2im_firmwares
from rAIversing.utils import check_do_nothing, clear_extra_data, check_and_fix_bin_path, check_and_fix_project_path, \
    is_already_exported
from rAIversing.pathing import *


def testbench(ai_module):
    # string="int function_1_00084f54() {\n\\n    int result;\n\\n    if (*PTR_PTR_DAT_000850f0 != 0 && *PTR_DAT_000850ec != '\\\\0') {\n\\n      result = (*pointer_to_function_1_00084f54)();\n\\n      return result;\n\\n    }\n\\n    return 0;\n\\n  }"
    string = """

{
"improved_code": "void do_nothing(void)\n{\n  // This function does nothing and simply returns.\n  return;\n}",
"renaming_operations": {
"FUN_000816a6": "do_nothing"
}
}

Explanation:

The original code does nothing and simply returns. We can improve its readability by renaming the function to "do_nothing" which better describes its purpose. We do not need to change any of the variable names since they are not used in the code.

The improved code is as follows:

void do_nothing(void)
{
  // This function does nothing and simply returns.
  return;
}

The renaming operations are as follows:

Original Function Name:
FUN_000816a6

New Function Name:
do_nothing"""


    print("WORKED")
    exit(0)

    rep = clear_extra_data(string, "json.decoder.JSONDecodeError: Extra data: line 8 column 1 (char 177)")
    try:
        response_dict = json.loads(rep, strict=False)
        print(response_dict)
    except json.decoder.JSONDecodeError as e:
        print(e)
        print(rep)
        print("ERROR")
        return

def evaluation(ai_module=None):
    eval_p2im_firmwares(ai_module)


def run_on_ghidra_project(path, project_name=None, binary_name=None, ai_module=None,custom_headless_binary=None,max_tokens=3000):
    if ai_module is None:
        raise ValueError("No AI module was provided")
    if not os.path.exists(path):
        if os.path.exists(f"{os.path.join(PROJECTS_ROOT, path)}"):
            path = f"{os.path.join(PROJECTS_ROOT, path)}"
        else:
            print(f"Path {path} does not exist")
            return

    if binary_name == None:
        if project_name == None:
            binary_name = os.path.basename(path)
        else:
            binary_name = project_name
    if project_name is None:
        project_name = os.path.basename(path).split(".")[0]
    import_path = check_and_fix_project_path(path)
    if not is_already_exported(import_path, binary_name):
        existing_project_to_c_code(import_path, binary_name, project_name, custom_headless_binary=custom_headless_binary)
    raie = rAIverseEngine(ai_module, json_path=f"{os.path.join(import_path, binary_name)}.json", max_tokens=max_tokens)
    raie.load_functions()
    raie.run_recursive_rev()
    raie.export_processed(all_functions=True)
    import_changes_to_existing_project(import_path, binary_name, project_name, custom_headless_binary=custom_headless_binary)


def run_on_new_binary(path, arch, ai_module=None,custom_headless_binary=None,max_tokens=3000):
    if ai_module is None:
        raise ValueError("No AI module was provided")
    import_path = check_and_fix_bin_path(path)
    if not is_already_exported(import_path, os.path.basename(import_path)):
        binary_to_c_code(import_path, arch, custom_headless_binary=custom_headless_binary)
    raie = rAIverseEngine(ai_module, binary_path=import_path, max_tokens=max_tokens)
    raie.load_functions()
    raie.run_recursive_rev()
    raie.export_processed(all_functions=True)
    import_changes_to_ghidra_project(import_path,custom_headless_binary=custom_headless_binary)


if __name__ == "__main__":
    parser = argparse.ArgumentParser(
        prog='rAIversing',
        description='Reverse engineering tool using AI')
    parser.add_argument('--testbench', action='store_true', help='Run testbench')
    parser.add_argument('--evaluation', action='store_true', help='Run evaluation')
    parser.add_argument('-a','--api_key_path', help='OpenAI API key path (preferred)', default=None)
    parser.add_argument('-t','--access_token_path', help='OpenAI access token path', default=None)
    parser.add_argument('-g','--ghidra_path', help='/path/to/custom/ghidra/support/analyzeHeadless', default=None)
    parser.add_argument('-m','--max_token', help='Max Tokens before Skipping Functions', default=3000,type=int)
    subparsers = parser.add_subparsers(help='sub-command help', dest='command')

    ghidra_selection = subparsers.add_parser('ghidra', help='Run rAIversing on a ghidra project')
    new_selection = subparsers.add_parser('new', help='Run rAIversing on a new binary')
    continue_selection = subparsers.add_parser('continue',
                                               help='Continue a previous rAIversing session that was started with the new command')

    ghidra_selection.add_argument('-p', '--path',
                                  help='/path/to/directory/containing/project.rep/',
                                  required=True)
    ghidra_selection.add_argument('-b', '--binary_name', help='name of the used binary', default=None)
    ghidra_selection.add_argument('-n', '--project_name', help='Project Name', default=None)

    new_selection.add_argument('-p', '--path',
                               help=f'Location of the binary file either absolute or relative to {BINARIES_ROOT}',
                               required=True)
    new_selection.add_argument('-a', '--arch', help='Processor ID as defined in Ghidra (e.g. x86:LE:64:default)',
                               default="ARM:LE:32:Cortex")  # TODO: Check if required

    continue_selection.add_argument('-p', '--path',
                                    help=f'/path/to/directory/containing/project.rep/ can be either absolute or relative to {PROJECTS_ROOT}',
                                    required=True)

    args = parser.parse_args()

    if args.api_key_path is not None:
        ai_module = chatGPT.api_key(args.api_key_path)
    elif args.access_token_path is not None:
        ai_module = chatGPT.access_token(args.access_token_path)
    else:
        ai_module = chatGPT.api_key()

    if args.testbench:
        testbench(ai_module)
    elif args.evaluation:
        evaluation(ai_module)
    elif args.command == "ghidra":
        print(args)
        run_on_ghidra_project(args.path, args.project_name, args.binary_name, ai_module=ai_module,custom_headless_binary=args.ghidra_path,max_tokens=args.max_token)

    elif args.command == "new":
        print(args)
        run_on_new_binary(args.path, args.arch, ai_module,custom_headless_binary=args.ghidra_path,max_tokens=args.max_token)

    elif args.command == "continue":
        print(args)
        run_on_ghidra_project(args.path, ai_module=ai_module,custom_headless_binary=args.ghidra_path,max_tokens=args.max_token)
    else:
        parser.print_help()
        exit(0)
