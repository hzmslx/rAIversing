import os

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
MODULES_ROOT = os.path.join(REPO_ROOT, "modules")
PROJECTS_ROOT = os.path.join(REPO_ROOT, "projects")
TESTING_ROOT = os.path.join(REPO_ROOT, "testing")
GHIDRA_ROOT = os.path.join(MODULES_ROOT, "ghidra")
