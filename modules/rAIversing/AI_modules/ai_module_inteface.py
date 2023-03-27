

class AiModuleInterface:
    def __init__(self):
        pass

    def prompt(self, prompt):  # type: (str) -> str
        """Prompts the model and returns the result"""
        pass

    def prompt_with_renaming(self, input_code): # type: (str) -> (str, dict)
        """Prompts the model and returns the result and a dict of renamed Names"""
        pass

    def assemble_prompt(self, input_code):
        """Assembles the prompt for the model"""
        pass
