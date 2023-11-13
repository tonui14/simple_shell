#include "header.h"

/**
 * main - function that checks if our shell is in 
 * interactive mode or non interactive mode
 *
 * Return: 0 on success
 **/

int main(void)
{
	if (isatty(STDIN_FILENO))
	{
		shell_interactive();
	}
	else
	{
		shell_non_interactive();
	}
	return (0);
}
