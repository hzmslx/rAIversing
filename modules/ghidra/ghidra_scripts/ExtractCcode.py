# Dumps all decompiled code to a file
# @author MrMatch246
# @category tooling
# @keybinding
# @menupath Tools.ExtractC
# @toolbar

import sys, os
from ghidra.app.decompiler.flatapi import FlatDecompilerAPI
from ghidra.program.flatapi import FlatProgramAPI
import ghidra.program.model.listing.VariableFilter.MemoryVariableFilter as MVF
import ghidra.program.model.listing.VariableFilter.RegisterVariableFilter as RVF
from pathing import *

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
    funcs = fm.getFunctions(True) # True means 'forward'

    cCode = ""
    for func in funcs:
        cCode+="\n////>>"+func.getEntryPoint().toString("0x")+">>"+func.getName()+">>////\n"
        for called_funct in func.getCalledFunctions(getMonitor()):
            cCode+="\n//Calling//>>"+called_funct.getEntryPoint().toString("0x")+">>"+called_funct.getName()+">>////\n"
        for calling_funct in func.getCallingFunctions(getMonitor()):
            cCode+="\n//Called by//>>"+calling_funct.getEntryPoint().toString("0x")+">>"+calling_funct.getName()+">>////\n"
        cCode+=fdapi.decompile(func)

    with open(os.path.join(PROJECTS_ROOT,str(fpapi.getCurrentProgram()).split(" ")[0]+".c"), "w") as f:
        f.write(cCode)
        f.close()





if __name__ == "__main__":
    main()
