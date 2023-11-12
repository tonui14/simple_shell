#include "header.h"

/**
 * execute_command - is the entry point
 * @command: the command to be executed
 *
 * Return: 0 upon successful execution
 **/

void execute_command(const char *command)
{
	pid_t baby_pid = fork();

	if (baby_pid < 0)
	{
		perror("Fork unsuccessful");
		exit(1);
	}
	else if (baby_pid == 0)
	{
		execlp(command, command, (char *)NULL);
		perror("Failed to execute command");
		exit(1);
	}
	else
	{
		int status;

		waitpid(baby_pid, &status, 0);
	}
}
