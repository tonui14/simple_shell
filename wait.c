#include "header.h"

/**
 * execute_input_command - executes input command
 * @input_command: the command to be executed
 *
 * Return: 0 upon successful execution
 **/

void execute_input_command(const char *input_command)
{
	pid_t baby_pid = fork();

	if (baby_pid < 0)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (baby_pid == 0)
	{
		char *token;
		int i = 0;
		char *delim = " ";
		char **args = malloc(sizeof(char *));

		if (args == NULL)
		{
			perror("malloc");
			exit(EXIT_FAILURE);
		}
		token = strtok((char *)input_command, delim);


		while (token != NULL)
		{
			args = realloc(args, (i + 1) * sizeof(char *));
			if (args == NULL)
			{
				perror("realloc");
				exit(EXIT_FAILURE);
			}
			args[i++] = token;
			token = strtok(NULL, delim);
		}
		args = realloc(args, (i + 1) * sizeof(char *));
		if (args == NULL)
		{
			perror("realloc");
			exit(EXIT_FAILURE);
		}
		args[i] = NULL;

		if (execve(args[0], args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
		free(args);
	}
	else
	{
		int status;

		if (waitpid(baby_pid, &status, 0) == -1)
		{
			perror("Error waiting for child process");
			exit(EXIT_FAILURE);
		}
	}
}
