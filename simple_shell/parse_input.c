#include "main.h"
/**
 * parse_command - function for parsing user input
 * @command: user command
 * Return: returns array of the token
 */
char **parse_command(char *command)
{
	int i;
	char *stkn;
	char **arr;

	stkn = strtok(command, " \n");
	arr = malloc(sizeof(char *) * 32);

	arr[0] = stkn;

	i = 1;

	while (stkn != NULL)
	{
		stkn = strtok(NULL, " \n");
		arr[i] = stkn;
		i++;
	}
	return (arr);
}

