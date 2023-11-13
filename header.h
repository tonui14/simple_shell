#ifndef _HEADER_H_
#define _HEADER_H_

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <sys/wait.h>
#include <limits.h>
#include <fcntl.h>
#include <signal.h>
#include <unistd.h>
#include <errno.h>

void shell_interactive(void);
void shell_non_interactive (void);
void execute_input_command(const char *input_command);
void show_prompt(void);
void get_user_input(char **input_command, size_t *size);
void run_executable(const char *input_command);
#endif
