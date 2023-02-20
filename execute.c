#include "main.h"
/**
 * run_execute - function for executing commands
 * @arr: command to be executed
 * Return:NULL
 */
void run_execute(char **arr)
{
	execve(arr[0], arr, NULL);
	perror("execve failed");
	exit(1);
}

