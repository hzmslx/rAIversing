# rAIversing
Repository for basic modules regarding the decompilation and reverse engeneering of Binaries using AI


## Installation
#### Repo
    -clone the repo
#### Ghidra
    -download the latest version of ghidra
    -extract the ghidra_xxx_PUBLIC folder /rAIversing/modules/ghidra
        should look like this: /rAIversing/modules/ghidra/ghidra_xxx_PUBLIC/
    -if it is not ghidra_10.2.2_PUBLIC
        -set the GHIDRA_INSTALL_DIR var in ""/rAIversing/modules/rAIversing/pathing/__init__.py"" to ghidra_xxx_PUBLIC
        (replace ghidra_10.2.2_PUBLIC with ghidra_xxx_PUBLIC )
#### OpenAI
    -create api_key file modules/rAIversing/AI_modules/openAI_core/api_key.txt
        -add your openAI api key to the file (sk-...)
