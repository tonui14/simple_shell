#include "header.h"

/**
 * show_prompt - is a function used to show the prompt
 *
 **/
void show_prompt(void)
{
	char *prompt = "$ ";

	write(STDOUT_FILENO, prompt, 2);
}
