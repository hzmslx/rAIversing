## !!! IMPORTANT !!!
* THIS IS A WORK IN PROGRESS AND IS NOT READY FOR PRODUCTION USE.
* BACKUP YOUR GHIDRA PROJECT BEFORE USING THIS TOOL.
* ``ARM:LE:32:Cortex`` is the default for now so if you want something else ,**specify it with the -a flag.**
* Pathing might be a bit of a mess.
* As the models behavior is not deterministic i might not have caught all the possible ways the response can be formatted.
* The models is not perfect and will sometimes make mistakes.(like claiming a function has something to do with a game when there is no game)


# **rAIversing**
## *Small but powerful reverse engineering tool using AI*
 * This tool uses ghidra scripts to extract the decompiled C code from either an existing project or a new binary.  
 The extracted code is then used as input for an AI model to improve the code AKA reverse engineering.  
 >Currently GPT3.5-turbo is used but other models can be used by implementing `AiModuleInterface`and supplying it in rAIversing.py   
 
 * The Magic happens by starting with the lowest layers of functions (The ones that do not call sub-functions) and then working our way up.  
 This way whenever we send the model a function to improve it will already have the context of its sub-functions.    
 * **This we call Context-Propagation.**  
    Context-Propagation is a key feature of this tool and is what makes it so powerful as it allows us to give the model the needed context without actually having to send it the whole program.  
 
 * After all functions in a layer have been improved the next layer is processed and so on until all functions have been improved (or skipped due to their size). 
 * As our prompt not only returns the improved Code but also a dictionary of renamings we use this to import the gained insights back into the ghidra project. 
 This includes function, variable and parameter names.  

 ## Examples
 * **Use your own ghidra installation, a custom key file location and an already existing project:**  
   ``python3 rAIversing.py -a ~/api.txt -g ~/ghidra_10.2.2_PUBLIC/support/analyzeHeadless ghidra -p ~/ghidra_project_directory -b my_binary -n ghidra_project_name``
 
 
 * **The previous example but the project directory, project and the binary have all the same name:**  
   ``python3 rAIversing.py -a ~/api.txt -g ~/ghidra_10.2.2_PUBLIC/support/analyzeHeadless ghidra -p ~/binary_i_found_in_the_parking_lot``  
 
  
 * **Start a new project from a binary after you followed the installation guide (api_key and ghidra):**  
   ``python3 rAIversing.py new -p ~/binary_i_found_on_the_internet`` (being `ARM:LE:32:Cortex`)  
 
 
 * **The previous example but with a [custom processor ID](https://static.grumpycoder.net/pixel/support/analyzeHeadlessREADME.html#processor):**  
   ``python3 rAIversing.py new -p ~/binary_i_found_in_the_mail -a x86:LE:64:default``
 
 
 * **The previous example but with a custom output directory:**  
   ``python3 rAIversing.py new -p ~/binary_i_found_in_the_mail -a x86:LE:64:default -o ~/projects/binary_i_found_in_the_mail``

  
 * **Start a binary in /testing/binaries/p2im after you run the setup.py and followed the installation guide:**    
   ``python3 rAIversing.py new -p p2im/Heat_Press``  (they are all ``ARM:LE:32:Cortex``)  
 
 
 * **Continue a session started with the previous command:**  
   ``python3 rAIversing.py new -p p2im/Heat_Press``

 
 * **Continue a session started with new but the binary was who knows where:**  
   ``python3 rAIversing.py continue -p binary_name ``


 * **Do a Dry-Run to check how many tokens the model would use approximately:**  
   ``python3 rAIversing.py new -p ~/binary_i_found_in_the_mail -d``

# **Unsure if the tokens are worth it?**
There are examples in [examples](/examples) of 3 binaries used for testing containing:
* An archived ghidra project of the binary after rAIversing.
* Json file containing the internal project storage of this tool.
* Json file containing a comparison of the actual and the reversed function names.
* C files containing the decompiled code of the binary before and after rAIversing.

You can just use the archived ghidra project to see the results of rAIversing to get a feeling for how much it can improve the code.

#### **Note:** if you have any idea on how to measure the quality of the code please let me know.


## Installation
### Repo
* clone the repo
### Ghidra 
##### (or use the --ghidra_path flag to specify a custom path to the analyzeHeadless binary)
* download the latest version of ghidra
 
* extract the `ghidra_xxx_PUBLIC` folder to `/rAIversing/modules/ghidra`

   * should look like this: `~/rAIversing/modules/ghidra/ghidra_xxx_PUBLIC/`
 
* if it is not ghidra_10.2.2_PUBLIC

  * set the GHIDRA_INSTALL_DIR var in `~/rAIversing/modules/rAIversing/pathing/__init__.py` to `ghidra_xxx_PUBLIC` (replace `ghidra_10.2.2_PUBLIC` with `ghidra_xxx_PUBLIC`)
### OpenAI
 * create api_key file `modules/rAIversing/AI_modules/openAI_core/api_key.txt`

 * add your openAI api key to the file (sk-...)
 
 OR (**DEPRECATED** as it might cause your openAI account to be banned)

 * create access_token file `modules/rAIversing/AI_modules/openAI_core/access_token.txt`
 
 * add your openAI access token to the file [chat.openai.com/api/auth/session](https://chat.openai.com/api/auth/session)

## Usage
>#### General
>``` 
>usage: rAIversing [-h] [--testbench] [--evaluation] [-a API_KEY_PATH] [-t ACCESS_TOKEN_PATH] [-g GHIDRA_PATH] [-m MAX_TOKEN] {ghidra,new,continue} ...
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
>   -m, --max_token           Maximum number of tokens before function is skipped (size of function)
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
>usage: rAIversing.py new [-h] -p PATH [-a ARCH] [-d ] [-o OUTPUT_PATH]
>
>optional arguments:
>   -h, --help            show this help message and exit
>   -p PATH, --path PATH  Location of the binary file either absolute or relative to ~/rAIversing/testing/samples/binaries
>   -a ARCH, --arch ARCH  Processor ID as defined in Ghidra (e.g. x86:LE:64:default)
>   -d, --dry             Dry run to calculate how many tokens will be used
>   -o, --output_path     Output path for the project aka ~/projects/my_binary
>```
>
>#### Continue a project
>```
>usage: rAIversing continue [-h] -p PATH
>
>optional arguments:
>   -h, --help            show this help message and exit
>   -p PATH, --path PATH  /path/to/directory/containing/project.rep/ can be either absolute or relative to ~/rAIversing/projects

TODO: stop saving if timeout or other "invalid" errors occur  
TODO: reprompt if new name is already in use ???  
TODO Can we use Partial output as part of the input for prompting a completion?  
