import os, sys
from rAIversing.pathing import *

def check_and_fix_bin_path(binary_path):
    if os.path.abspath(binary_path) == binary_path:
        return binary_path
    else:
        if os.path.isfile(os.path.join(BINARIES_ROOT, binary_path)):
            return os.path.join(BINARIES_ROOT, binary_path)
        else:
            raise FileNotFoundError(f"Binary {binary_path} not found in {BINARIES_ROOT}")