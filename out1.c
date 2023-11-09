#include "header.h"

/**
 * main - is the entry point
 *
 * Return: 0 upon successful execution
 **/

int main(void)
{
	char *in = NULL;
	size_t len = 0;

	ssize_t nread;

	nread = getline(&in, &len, stdin);

	if (nread <= -1)
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
	free(in);
	return (0);
}
