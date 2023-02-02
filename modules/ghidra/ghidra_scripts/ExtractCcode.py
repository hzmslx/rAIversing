#  Dumps all decompiled code to a file
# @author MrMatch246
# @category tooling
# @keybinding
# @menupath Tools.ExtractC
# @toolbar

import sys, os
from ghidra.app.decompiler.flatapi import FlatDecompilerAPI
from ghidra.program.flatapi import FlatProgramAPI
import ghidra.program.model.listing.VariableFilter as VF
from ghidra.program.model.listing.VariableFilter import MemoryVariableFilter
import ghidra.program.model.listing.Function

from pathing import *

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
    projectMgr = project.getProjectManager()
    activeProject = projectMgr.getActiveProject()
    projectData = activeProject.getProjectData()
    rootFolder = projectData.getRootFolder()
    fm = currentProgram.getFunctionManager()
    funcs =list(fm.getFunctions(True)) # True means 'forward'

    cCode = ""

    for func in funcs: # type: ghidra.program.model.listing.Function
        if len(func.getCalledFunctions(getMonitor())) > 0 or func.hasNoReturn():
            continue
            pass

        cCode+="\n////>>"+func.getEntryPoint().toString("0x")+">>"+func.getName()+">>////\n"
        for callee in func.getCalledFunctions(getMonitor()):
            cCode += callee.getName()+"\n"
        cCode+=fdapi.decompile(func)

    with open(os.path.join(PROJECTS_ROOT,str(fpapi.getCurrentProgram()).split(" ")[0]+".c"), "w") as f:
        f.write(cCode)
        f.close()







if __name__ == "__main__":
    main()
