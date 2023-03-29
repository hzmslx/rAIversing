import os

from rAIversing.Ghidra_Custom_API.HeadlessAnalyzer import HeadlessAnalyzerWrapper
from rAIversing.pathing import PROJECTS_ROOT, GHIDRA_SCRIPTS, BINARIES_ROOT
from rAIversing.utils import check_and_fix_bin_path


def binary_to_c_code(binary_path, processor_id="",custom_headless_binary=None):
    import_path = check_and_fix_bin_path(binary_path)
    project_name = os.path.basename(binary_path).replace(".", "_")
    ah = HeadlessAnalyzerWrapper(custom_headless_binary)
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

def existing_project_to_c_code(project_location, binary_name=None, project_name=None,custom_headless_binary=None):
    if project_name is None:
        project_name = os.path.basename(project_location)
    if binary_name is None:
        binary_name=project_name

    ah = HeadlessAnalyzerWrapper(custom_headless_binary)
    ah.project_location(f'{project_location}') \
        .project_name(project_name) \
        .postScript(f'ExtractCcode.py {project_location}') \
        .process(binary_name) \
        .noanalysis()\
        .scriptPath(f'{GHIDRA_SCRIPTS}') \
        .log(f'{PROJECTS_ROOT}/log') \
        .scriptlog(f'{PROJECTS_ROOT}/scriptlog')

    ah.print()
    ah.run()





def import_changes_to_ghidra_project(binary_path,custom_headless_binary=None):
    import_path = check_and_fix_bin_path(binary_path)
    project_name = os.path.basename(binary_path).replace(".", "_")

    ah = HeadlessAnalyzerWrapper(custom_headless_binary)
    ah.project_location(f'{os.path.join(PROJECTS_ROOT,project_name)}') \
        .project_name(project_name) \
        .scriptPath(f'{GHIDRA_SCRIPTS}') \
        .postScript(f'ImportChanges.py') \
        .process(project_name) \
        .noanalysis() \
        .scriptlog(f'{PROJECTS_ROOT}/scriptlog')
    ah.print()
    ah.run()

def import_changes_to_existing_project(project_location,binary_name=None,project_name=None,custom_headless_binary=None):
    if project_name is None:
        project_name = os.path.basename(project_location)
    if binary_name is None:
        binary_name=project_name

    ah = HeadlessAnalyzerWrapper(custom_headless_binary)
    ah.project_location(f'{project_location}') \
        .project_name(project_name) \
        .scriptPath(f'{GHIDRA_SCRIPTS}') \
        .postScript(f'ImportChanges.py {project_location}') \
        .process(binary_name) \
        .noanalysis() \
        .scriptlog(f'{PROJECTS_ROOT}/scriptlog')

    ah.print()
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
