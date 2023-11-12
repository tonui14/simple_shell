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

void execute_command(const char *command);
#endif
