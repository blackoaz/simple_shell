#include "main.h"
/**
 * fork_process - function for creating a child process
 * Return: returns child process
 */
pid_t fork_process(void)
{
	pid_t pid;

	pid = fork();

	if (pid == -1)
	{
		perror("Error");
		exit(1);
	}
	return (pid);
}

