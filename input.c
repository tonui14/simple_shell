#include "header.h"

/**
 * get_user_input - is used to read the user input
 *@input_command: Command to be input
 **/

ssize_t get_user_input(char *cmd)
{
	size_t size = 0;
	ssize_t read;

	read = getline(&cmd, &size, stdin);

	return (read);

}
