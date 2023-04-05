#  Dumps all decompiled code to a file
# @author MrMatch246
# @category tooling
# @keybinding
# @menupath Tools.ExtractC
# @toolbar
import json
import sys

from ghidra.app.decompiler.flatapi import FlatDecompilerAPI
from ghidra.program.flatapi import FlatProgramAPI

from pathing import *

try:
    from ghidra.ghidra_builtins import *
except:
    pass

fpapi = FlatProgramAPI(getState().getCurrentProgram())
fdapi = FlatDecompilerAPI(fpapi)

def getLowestFunctionLayer(functions):
    lflList = []
    for name, data in functions.items():
        if not data["improved"]:
            if len(data["code"].split("FUN_"))== 2:
                lflList.append(name)
    return lflList

def renameForAllFunctions(functions, renaming_dict):
    for name, data in functions.items():
        for old, new in renaming_dict.items():
            data["code"] = data["code"].replace(old, new)








def main(export_path=None):
    state = getState()
    project = state.getProject()
    locator = project.getProjectData().getProjectLocator()
    projectMgr = project.getProjectManager()
    activeProject = projectMgr.getActiveProject()
    projectData = activeProject.getProjectData()
    rootFolder = projectData.getRootFolder()
    fm = currentProgram.getFunctionManager()
    funcs =list(fm.getFunctions(True)) # True means 'forward'

    function_metadata = {}

    cCode = ""

    for i in range(len(funcs)):
        func = funcs[i]
        function_name = func.getName()
        function_metadata[function_name] = {}
        function_metadata[function_name]["current_name"] = func.getName()
        function_metadata[function_name]["calling"] = []
        function_metadata[function_name]["called"] = []
        function_metadata[function_name]["code"] = fdapi.decompile(func)
        function_metadata[function_name]["entrypoint"] = func.getEntryPoint().toString("0x")
        function_metadata[function_name]["improved"] = "FUN_" not in function_name
        function_metadata[function_name]["skipped"] = False
        function_metadata[function_name]["renaming"] = {}
        function_metadata[function_name]["imported"] = False
        function_code = fdapi.decompile(func)

        for calling in func.getCallingFunctions(getMonitor()):
            function_metadata[func.getName()]["calling"].append(calling.getName())

        #if len(function_code.split("FUN_")) > 2:
        #    if len(func.getCalledFunctions(getMonitor())) == 0:



        for called in func.getCalledFunctions(getMonitor()):
            function_metadata[func.getName()]["called"].append(called.getName())





        cCode+="\n////>>"+func.getEntryPoint().toString("0x")+">>"+func.getName()+">>////\n"
        cCode+=function_code

    program_name = str(fpapi.getCurrentProgram()).split(" ")[0].replace(".","_")
    if export_path is None:
        export_path = os.path.join(PROJECTS_ROOT,program_name)

    if not os.path.exists(export_path):
        os.mkdir(export_path)

    with open(os.path.join(export_path,program_name+".c"), "w") as f:
        f.write(cCode)
        f.close()
    with open(os.path.join(export_path,program_name+".json"), "w") as f:
        f.write(json.dumps(function_metadata))
        f.close()






if __name__ == "__main__":
    if len(sys.argv) > 1:
        main(sys.argv[1])
    else:
        main()
