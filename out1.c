#include "header.h"

/**
 * main - is the entry point
 * @ac: is the argument count
 * @argv: is the pointer to the pointer of the argument vector
 *
 * Return: 0 upon successful execution
 **/

int main(int ac, char **argv)
{
	char *in = NULL;
	size_t len = 0;

	void(ac);
	(void)argv;

	ssize_t nread;

	nread = getline(&in, &len, stdin);

	if (nread <= 0)
	{
		if (feof(stdin))
		{
			printf("\n");
		}
		else
		{
			perror("No such file or directory");
		}
		free(in);
		exit(1);
	}
	if (in[nread - 1] == '\n')
	{
		in[nread - 1] = '\0';
	}
	if (isatty(fileno(stdin)))
	{
		printf("Running in interactive mode\n");
	}
	else
	{
		printf("Running in non-interactive mode\n");
	}

	execute_command(in);

	free(in);
	return (0);
}
