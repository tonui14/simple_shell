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
		perror("Fork unsuccessful");
		exit(1);
	}
	else if (baby_pid == 0)
	{
		execlp(input_command, input_ command, (char *)NULL);
		perror("Failed to execute command");
		exit(1);
	}
	else
	{
		int status;
		//wait for child process to execute

		if (waitpid(baby_pid, &status, 0) == -1)
        {
            perror("Error waiting for child process");
            exit(1);
	}
	}
}
