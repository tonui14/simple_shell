#include "header.h"

/**
 * get_user_input - is used to read the user input
 *
 **/

void get_user_input(char **input_command)
{
    size_t size = 0;
    ssize_t read;

    if ((read = getline(command, &size, stdin)) == -1)
    {
        if (feof(stdin)) 
	{
            printf("\n");
            exit(EXIT_SUCCESS);
        } 
	else
	{
            perror("Error reading input");
            exit(EXIT_FAILURE);
        }
    }

    (*input_command)[read - 1] = '\0'; // Remove newline
}

//above code reads user input and removes a newline at the end
