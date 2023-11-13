#include "header.h"

/**
 * main - is the entry point of the code
 *
 * Return: 0
 **/

int main(void)
{
	char input_command[180];

	while (1)
	{
		show_prompt();
		get_user_input(&input_command, sizeof(input_command));
		run_executable(input_command);
	}

	return (0);
}
