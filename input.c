#include "header.h"

/**
 * get_user_input - is used to read the user input
 *@input_command: Command to be input
 **/

void get_user_input(char **input_command, size_t *size)
{
	ssize_t read;

	read = getline(input_command, size, stdin);

	if (read == -1)
	{
		if (feof(stdin))
		{
			printf("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			perror("Error reading input");
			exit(EXIT_FAILURE);
		}
	}

	(*input_command)[read - 1] = '\0';
}
