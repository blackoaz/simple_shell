#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <unistd.h>
#include <string.h>
#include <sys/wait.h>

int main(void);
char *read_input();
char **parse_command(char *command);
pid_t fork_process(void);
void run_execute(char **arr);

#endif
