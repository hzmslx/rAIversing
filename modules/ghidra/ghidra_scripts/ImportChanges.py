# loads changes from a file and applies them to the current program
# @author MrMatch246
# @category tooling
# @keybinding
# @menupath Tools.ImportChanges
# @toolbar
import json
import sys, os
from ghidra.app.decompiler.flatapi import FlatDecompilerAPI
from ghidra.program.flatapi import FlatProgramAPI
import ghidra.program.model.listing.VariableFilter as VF
from ghidra.program.model.listing.VariableFilter import MemoryVariableFilter, RegisterVariableFilter
import ghidra.program.model.listing.Function
from ghidra.util.task import ConsoleTaskMonitor
from ghidra.app.decompiler import DecompileOptions, DecompInterface
from ghidra.app.decompiler.component import DecompilerUtils
from ghidra.program.model.address import AddressSpace
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


def main():
    state = getState()
    project = state.getProject()
    locator = project.getProjectData().getProjectLocator()
    fm = currentProgram.getFunctionManager()
    funcs = list(fm.getFunctions(True))  # True means 'forward'

    program_name = str(fpapi.getCurrentProgram()).split(" ")[0].replace(".", "_")
    with open(os.path.join(PROJECTS_ROOT, program_name, program_name + ".json"), "r") as f:
        functions_dict = json.load(f)

    current_lookup = {}
    original_lookup = {}

    # Lookup tables
    for function_name, data in functions_dict.items():
        current_lookup[function_name] = data["current_name"]
        original_lookup[data["current_name"]] = function_name

    for func in funcs:

        # Getting original function name if it already has been in ghidra
        func_name = func.getName()
        if func_name not in current_lookup.keys():
            if func_name in original_lookup.keys():
                func_name = original_lookup[func_name]

        # Renaming if it is present in the json
        if func_name in functions_dict:
            function_data = functions_dict[func_name]
            renaming_dict = function_data["renaming"]
            new_name = function_data["current_name"]

            # We can skip functions that are Skipped in the json
            if function_data["skipped"]:
                continue

            print(func_name)
            func.setName(new_name, IMPORTED)

            # print("Symbols:")

            # Getting symbols and HighFunction
            # Symbols contain register variables besides other things
            hf = get_high_function(func)
            symbols = get_function_symbols(func)

            for symbol in symbols:
                # print(symbol.getName())
                symname = symbol.getName()
                if symname in renaming_dict.keys():
                    new_name = renaming_dict[symname]
                    if new_name == "" or new_name == symname:
                        continue

                    try:
                        symbol.getSymbol().setName(new_name, IMPORTED)
                        print("Renaming " + symname + " to " + new_name + " in function " + func_name)

                    # If the name is already taken, we add an underscore to the end
                    except ghidra.util.exception.DuplicateNameException:
                        symbol.getSymbol().setName(new_name + "_", IMPORTED)
                        print("Renaming " + symname + " to " + new_name + "_ in function " + func_name)

                    except Exception as e:
                        print("Error while renaming " + symname + " in function " + func_name)
                        print(e)
                        pass

            # Committing changes to the database
            HighFunctionDBUtil.commitLocalNamesToDatabase(hf, IMPORTED)
            HighFunctionDBUtil.commitParamsToDatabase(hf, True, IMPORTED)

            # print("Variables:")

            # Getting variables and parameters of the normal function object
            vars_params = []
            vars_params += func.getAllVariables()
            vars_params += func.getParameters()

            for var in vars_params:
                var_name = var.getName()
                if var_name in renaming_dict.keys():
                    # print(var.getName())
                    new_name = renaming_dict[var_name]
                    if new_name == "" or new_name == var_name:
                        continue

                    print("Renaming " + var_name + " to " + new_name + " in function " + func_name)
                    try:
                        var.setName(new_name, IMPORTED)
                    # If the name is already taken, we add an underscore to the end (again)
                    except ghidra.util.exception.DuplicateNameException:
                        var.setName(new_name + "_", IMPORTED)


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
    main()
