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
		char *const args[] = {input_command, NULL};

		if (execve(input_command, args, NULL) == -1)
		{
			perror("execve");
			exit(EXIT_FAILURE);
		}
	}
	else
	{
		int status;

		if (waitpid(baby_pid, &status, 0) == -1)
		{
			perror("Error waiting for child process");
			exit(1)'/;
		}
	}
}
