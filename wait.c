#include "header.h"

/**
 * main - is the entry point
 *
 * Return: 0 upon successful execution
 **/

int main(void)
{
	pid_t baby_pid = fork();

	if (baby_pid < 0)
	{
		perror("Fork unsuccessful");
		free(in);
		exit(1);
	}
	else if (baby_pid == 0)
	{
		execlp(in, in, (char *)NULL);
		perror("failed to execute command");
		exit(1);
	}
	else
	{
		int status;

		waitpid(baby_pid, &status, 0);
	}
	free(in);
	return (0);
}
