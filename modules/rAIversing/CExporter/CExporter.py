import os,sys
from rAIversing.pathing import *
from rAIversing.CExporter.ghidra_commander import HeadlessAnalyzerWrapper


def main():
    ah = HeadlessAnalyzerWrapper()
    ah.import_file(f'{BINARIES_ROOT}/testbinary')
    ah.project_location(f'{PROJECTS_ROOT}') \
        .project_name('testproject') \
        .postScript(f'ExtractCcode.py') \
        .scriptPath(f'{GHIDRA_SCRIPTS}') \
        .log(f'{PROJECTS_ROOT}/log') \
        .deleteProject()\
        .scriptlog(f'{PROJECTS_ROOT}/scriptlog') \
        .run()


if __name__ == "__main__":
    main()