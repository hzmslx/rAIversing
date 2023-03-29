

# rAIversing
Repository for basic modules regarding the decompilation and reverse engeneering of Binaries using AI


## Installation
>#### Repo
>>-clone the repo
>#### Ghidra
>>-download the latest version of ghidra
>> 
>>-extract the `ghidra_xxx_PUBLIC` folder to `/rAIversing/modules/ghidra`
>>
>>>should look like this: `/rAIversing/modules/ghidra/ghidra_xxx_PUBLIC/`
>> 
>>-if it is not ghidra_10.2.2_PUBLIC
>> 
>>>-set the GHIDRA_INSTALL_DIR var in `/rAIversing/modules/rAIversing/pathing/__init__.py` to `ghidra_xxx_PUBLIC`
>>>>(replace `ghidra_10.2.2_PUBLIC` with `ghidra_xxx_PUBLIC`)
>#### OpenAI
>>> -create api_key file `modules/rAIversing/AI_modules/openAI_core/api_key.txt`
>>>
>>> -add your openAI api key to the file (sk-...)
>> 
>> OR (**DEPRECATED** as it might cause your openAI account to be banned)
>>
>>>-create access_token file `modules/rAIversing/AI_modules/openAI_core/access_token.txt`
>>> 
>>>-add your openAI access token to the file [chat.openai.com/api/auth/session](https://chat.openai.com/api/auth/session)

## Usage
>#### General
>``` 
>usage: rAIversing [-h] [--testbench] [--evaluation] [-a API_KEY_PATH] [-t ACCESS_TOKEN_PATH] [-g GHIDRA_PATH] {ghidra,new,continue} ...
>
>Reverse engineering tool using AI
>
>positional arguments:
>   {ghidra,new,continue}
>sub-command                 help
>   ghidra                    Run rAIversing on a ghidra project
>   new                       Run rAIversing on a new binary
>   continue                  Continue a previous rAIversing session that was started with the new command
>
>optional arguments:
>   -h, --help                show this help message and exit
>   --testbench               Run testbench
>   --evaluation              Run evaluation
>   -a, --api_key_path        Custom OpenAI API key path (preferred)
>   -t, --access_token_path   Custom OpenAI access token path
>   -g, --ghidra_path         /path/to/custom/ghidra/support/analyzeHeadless
>```
>#### Using an existing ghidra project
>```
>usage: rAIversing.py ghidra [-h] -p PATH [-b BINARY_NAME] [-n PROJECT_NAME]
>
>optional arguments:
>   -h, --help            show this help message and exit
>   -p, --path            /path/to/directory/containing/project.rep/
>   -b, --binary_name     name of the used binary
>   -n, --project_name    Project Name (usually the same as the binary name)
>```
>
>#### Starting from a binary
>``` 
>usage: rAIversing.py new [-h] -p PATH [-a ARCH]
>
>optional arguments:
>   -h, --help            show this help message and exit
>   -p PATH, --path PATH  Location of the binary file either absolute or relative to /home/user/REPOS/rAIversing/testing/samples/binaries
>   -a ARCH, --arch ARCH  Processor ID as defined in Ghidra (e.g. x86:LE:64:default)
>```
>
>#### Continue a project
>```
>usage: rAIversing continue [-h] -p PATH
>
>optional arguments:
>   -h, --help            show this help message and exit
>   -p PATH, --path PATH  /path/to/directory/containing/project.rep/ can be either absolute or relative to /home/user/REPOS/rAIversing/projects

TODO: stop saving if timeout or other "invalid" errors occur
TODO: reprompt if new name is already in use ???
TODO Can we use Partial output as part of the input for prompting a completion?