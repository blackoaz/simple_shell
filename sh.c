#include "main.h"
/**
 * main - main function for the shell
 * @argc: the number of arguments
 * @argv: array of inputs
 * Return: returns 0
 */
int main()
{
	char *command = NULL;
	size_t len = 0;

	while (1)
	{
		printf("$ ");
		getline(&command, &len, stdin);

	}
	free(command);
	return (0);
}
