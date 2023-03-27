import os, sys
from rAIversing.pathing import *
from rAIversing.CExporter.ghidra_commander import HeadlessAnalyzerWrapper
from rAIversing.utils import check_and_fix_bin_path




def binary_to_c_code(binary_path, processor_id=""):
    import_path = check_and_fix_bin_path(binary_path)
    project_name = os.path.basename(binary_path).replace(".", "_")
    ah = HeadlessAnalyzerWrapper()
    ah.import_file(import_path)
    ah.project_location(f'{os.path.join(PROJECTS_ROOT,project_name)}') \
        .project_name(project_name) \
        .postScript(f'ExtractCcode.py') \
        .scriptPath(f'{GHIDRA_SCRIPTS}') \
        .log(f'{PROJECTS_ROOT}/log') \
        .scriptlog(f'{PROJECTS_ROOT}/scriptlog')

    if processor_id != "":
        ah.processor(processor_id)
    ah.run()

def run20819():
    ah = HeadlessAnalyzerWrapper()
    ah.import_file(f'{BINARIES_ROOT}/20819_firmware')
    ah.project_location(f'{PROJECTS_ROOT}') \
        .project_name('20819_firmware') \
        .postScript(f'ExtractCcode.py') \
        .scriptPath(f'{GHIDRA_SCRIPTS}') \
        .deleteProject() \
        .log(f'{PROJECTS_ROOT}/log') \
        .processor("ARM:LE:32:Cortex") \
        .scriptlog(f'{PROJECTS_ROOT}/scriptlog') \
        .run()
