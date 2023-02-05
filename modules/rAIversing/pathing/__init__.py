import os

REPO_ROOT = os.path.dirname(os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__)))))
MODULES_ROOT = os.path.join(REPO_ROOT, "modules")
PROJECTS_ROOT = os.path.join(REPO_ROOT, "projects")
TESTING_ROOT = os.path.join(REPO_ROOT, "testing")
SAMPLES_ROOT = os.path.join(TESTING_ROOT, "samples")
BINARIES_ROOT = os.path.join(SAMPLES_ROOT, "binaries")
GHIDRA_ROOT = os.path.join(MODULES_ROOT, "ghidra")
GHIDRA_SCRIPTS = os.path.join(GHIDRA_ROOT, "ghidra_scripts")
AI_MODULES_ROOT = os.path.join(MODULES_ROOT, "rAIversing", "AI_modules")


#TODO: fill in the following to match your ghidra installation
GHIDRA_INSTALL_DIR = os.path.join(GHIDRA_ROOT, "ghidra_10.2.2_PUBLIC")
GHIDRA_HEADLESS_BINARY = os.path.join(GHIDRA_INSTALL_DIR, "support","analyzeHeadless")

