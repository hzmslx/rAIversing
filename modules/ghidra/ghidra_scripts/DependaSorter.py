# Sorts by dependancy
# @author MrMatch246
# @category tooling
# @keybinding
# @menupath Tools.DependancySorter
# @toolbar

import sys, os
from ghidra.app.decompiler.flatapi import FlatDecompilerAPI
from ghidra.program.flatapi import FlatProgramAPI
import ghidra.program.model.listing.VariableFilter as VF

from pathing import *

try:
    from ghidra.ghidra_builtins import *
except:
    pass

fpapi = FlatProgramAPI(getState().getCurrentProgram())
fdapi = FlatDecompilerAPI(fpapi)

def sorter():
    pass
