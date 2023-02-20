#include "main.h"
/**
 * read_input - reads the user input
 * Return: returns the user input
 */
char *read_input()
{
	char *command = NULL;
	size_t len = 0;

	printf("$ ");
	getline(&command, &len, stdin);
	return (command);
}
