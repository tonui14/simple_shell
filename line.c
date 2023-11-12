#include "header.h"

/**
 * main - is the entry point of the code
 * @ac: is the argument count
 * @argv: is the pointer to the pointer
 *
 * Return: 0 on successful execution
 **/

int main(int ac, char **argv)
{
	char *out = "(shell)$";
	if (ac > 1)
	{
		printf("Arguments: ");
		for (int i = 1; i < ac; i++)
		{
			printf("%s ", argv[i]);
		}
		printf("\n");
	}
	printf("%s\n", out);

	return(0);
}
