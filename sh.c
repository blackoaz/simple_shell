#include "main.h"
/**
 * main - main function for the shell
 * Return: returns 0
 */
int main(void)
{
	char *input;
	char **args;
	pid_t pid;
	int status;

	while (1)
	{
		input = read_input();
		args = parse_command(input);
		if (strcmp(args[0], "exit") == 0 && (args[1] == NULL))
		{
			free(input);
			free(args);
			exit(0);
		}
		pid = fork_process();
		if (pid == 0)
		{
			run_execute(args);
		}
		else
		{
			wait(&status);
			free(input);
			free(args);
		}
	}
	return (0);
}
