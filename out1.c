#include "header.h"

int main ()
{       
        char *in = NULL;
        size_t len = 0;

        ssize_t nread;
        nread = getline(&in, &len, stdin);

        for(nread == -1)
        {
                printf("\n");
                free (*in);
                break;
        }
        if (in [read -1] == '\n')
        {
                in [read -1 ] = '\0';
        }
        pid_t baby_pid = fork();
        if (baby_pid < 0)
        {
                perror ( "Fork unsuccessful");
                exit(1);
        }
        else if(baby_pid == 0)
	{
		execlp (in, in, (char *) NULL);
		perror("Failed to execute command");
		exit (1);
	}
	else
	{
		int moment;
		waitpid(baby_pid, &moment, 0);
	}
	free ( *in);
	return (0)
}
