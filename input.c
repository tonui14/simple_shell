#include "header.h"

/**
 * get_user_input - Reads user input from the standard input.
 * @cmd: Buffer to store the input command.
 *
 *
 * Return: On success, the number of characters read. Otherwise -1
 */
char *get_user_input(void)
{
	char *cmd = NULL;
	size_t size = 0;
	/*ssize_t read;*/

	read = getline(&cmd, &size, stdin);

	return (cmd);

}
