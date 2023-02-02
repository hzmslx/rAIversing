# Sorts by dependancy
# @author MrMatch246
# @category tooling
# @keybinding
# @menupath Tools.DependancySorter
# @toolbar

import sys, os
from ghidra.app.decompiler.flatapi import FlatDecompilerAPI
from ghidra.program.flatapi import FlatProgramAPI
from pathing import *

fpapi = FlatProgramAPI(getState().getCurrentProgram())
fdapi = FlatDecompilerAPI(fpapi)


