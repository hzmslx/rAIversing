# loads changes from a file and applies them to the current program
# @author MrMatch246
# @category tooling
# @keybinding
# @menupath Tools.ImportChanges
# @toolbar
import json
import sys
from ghidra.app.decompiler.flatapi import FlatDecompilerAPI
from ghidra.program.flatapi import FlatProgramAPI
import ghidra.program.model.listing.Function
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.decompiler import DecompileOptions, DecompInterface
from ghidra.program.model.pcode import HighFunctionDBUtil
from pathing import *
import ghidra.program.model.symbol.SourceType.IMPORTED as IMPORTED

# As we import changes from a file, we mark them as imported and not as user defined

try:
    from ghidra.ghidra_builtins import *
except:
    pass

fpapi = FlatProgramAPI(getState().getCurrentProgram())
fdapi = FlatDecompilerAPI(fpapi)


def main(json_file_path=None):
    state = getState()
    project = state.getProject()
    locator = project.getProjectData().getProjectLocator()
    fm = currentProgram.getFunctionManager()
    funcs = list(fm.getFunctions(True))  # True means 'forward'

    program_name = str(fpapi.getCurrentProgram()).split(" ")[0].replace(".", "_")
    if json_file_path is None:
        json_file_path = os.path.join(PROJECTS_ROOT, program_name, program_name + ".json")

    with open(json_file_path, "r") as f:
        functions_dict = json.load(f)

    current_lookup = {}
    original_lookup = {}

    # Lookup tables
    for function_name, data in functions_dict.items():
        current_lookup[function_name] = data["current_name"]
        original_lookup[data["current_name"]] = function_name

    for func in funcs:

        # Getting original function name if it already has been in ghidra
        func_name = str(func.getName())
        if func_name not in current_lookup.keys():
            if func_name in original_lookup.keys():
                func_name = original_lookup[func_name]

        # Renaming if it is present in the json
        if func_name in functions_dict:
            function_data = functions_dict[func_name]
            renaming_dict = function_data["renaming"]
            new_name = function_data["current_name"]

            # We can skip functions that are Skipped in the json

            if function_data["skipped"] or "imported" in function_data.keys() and function_data["imported"]:
                continue

            func.setName(new_name, IMPORTED)

            # print("Symbols:")

            # Getting symbols and HighFunction
            # Symbols contain register variables besides other things
            hf = get_high_function(func)
            symbols = get_function_symbols(func)

            for high_symbol in symbols:
                # print(high_symbol.getName())
                symname = high_symbol.getName()
                if symname in renaming_dict.keys():
                    new_name = renaming_dict[symname]
                    if new_name == "" or new_name == symname or " " in new_name or "," in new_name:
                        continue
                    symbol = high_symbol.getSymbol()
                    if symbol is None:
                        continue
                    try:
                        symbol.setName(new_name, IMPORTED)


                    # If the name is already taken, we add an underscore to the end
                    except ghidra.util.exception.DuplicateNameException:
                        new_name = new_name + "_"
                        symbol.setName(new_name, IMPORTED)

                    except Exception as e:
                        if "NoneType" in str(e):
                            continue
                        print("Error while renaming " + symname + " in function " + func_name)
                        print(e)
                        continue
                    print("Symbol Renaming " + symname + " to " + new_name + " in function " + func_name)

            # Committing changes to the database
            HighFunctionDBUtil.commitLocalNamesToDatabase(hf, IMPORTED)
            HighFunctionDBUtil.commitParamsToDatabase(hf, True, IMPORTED)

            # print("Variables:")

            # Getting variables and parameters of the normal function object
            vars_params = []
            vars_params += func.getAllVariables()
            vars_params += func.getParameters()
            vars_params = list(dict.fromkeys(vars_params))
            for var in vars_params:
                var_name = var.getName()
                if var_name in renaming_dict.keys():
                    # print(var.getName())
                    new_name = renaming_dict[var_name]
                    if new_name == "" or new_name == var_name or " " in new_name or "," in new_name:
                        continue
                    try:
                        var.setName(new_name, IMPORTED)
                    # If the name is already taken, we add an underscore to the end (again)
                    except ghidra.util.exception.DuplicateNameException:
                        new_name = new_name + "_"
                        var.setName(new_name, IMPORTED)

                    print(str(type(var)) + " Renaming " + var_name + " to " + new_name + " in function " + func_name)
            functions_dict[func_name]["imported"] = True

    with open(json_file_path, "w") as f:
        f.write(json.dumps(functions_dict, indent=4))

def get_high_function(func):
    options = DecompileOptions()
    monitor = ConsoleTaskMonitor()
    ifc = DecompInterface()
    ifc.setOptions(options)
    ifc.openProgram(getState().getCurrentProgram())
    res = ifc.decompileFunction(func, 60, monitor)
    high = res.getHighFunction()
    return high


def get_function_symbols(func):
    hf = get_high_function(func)
    lsm = hf.getLocalSymbolMap()
    return lsm.getSymbols()


if __name__ == "__main__":
    args = list(getScriptArgs())
    print(args)
    if len(args) > 0:
        print(args)
        main(str(args[0]))
    else:
        main()
