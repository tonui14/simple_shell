#include "header.h"

/**
 * main - is the entry point of the code
 *
 * Return: 0
 **/

int main(void)
{
	char *cmd = 0;
	ssize_t command;

	while (1)
	{
		show_prompt();
		command = get_user_input(cmd);
		printf("%ld", command);
		/*run_executable(input_command);*/
	}

	return (0);
}
