import os, sys
from rAIversing.pathing import *
from rAIversing.CExporter.ghidra_commander import HeadlessAnalyzerWrapper
from rAIversing.utils import check_and_fix_bin_path




def import_changes_to_ghidra_project(binary_path, processor_id=""):
    import_path = check_and_fix_bin_path(binary_path)
    project_name = os.path.basename(binary_path).replace(".", "_")

    ah = HeadlessAnalyzerWrapper()
    ah.project_location(f'{os.path.join(PROJECTS_ROOT,project_name)}') \
        .project_name(project_name) \
        .scriptPath(f'{GHIDRA_SCRIPTS}') \
        .postScript(f'ImportChanges.py') \
        .process(project_name) \
        .noanalysis() \
        .scriptlog(f'{PROJECTS_ROOT}/scriptlog')

    #ah = HeadlessAnalyzerWrapper()
    #ah.import_file(import_path)
    #ah.project_location(f'{os.path.join(PROJECTS_ROOT,project_name)}') \
    #    .project_name(project_name) \
    #    .postScript(f'ImportChanges.py') \
    #    .scriptPath(f'{GHIDRA_SCRIPTS}') \
    #    .log(f'{PROJECTS_ROOT}/log') \
    #    .scriptlog(f'{PROJECTS_ROOT}/scriptlog')

    if processor_id != "":
        ah.processor(processor_id)
    ah.print()
    ah.run()
