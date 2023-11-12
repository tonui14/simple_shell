#include "header.h"

/**
 * main - is the entry point of the code
 *
 * Return: 0
 **/

int main(void) 
{
    char input_command[180]; //this is reffering to the short one word command size - should be within this range 

    while (1) // this is an infinite loop for always displaying the prompt after writing the code within
    {
        show__prompt(); //refers to the show prompt code
        get_user_input(input_command, sizeof(input_command));
        run_executable(input_command);
    }

    return 0;
}
