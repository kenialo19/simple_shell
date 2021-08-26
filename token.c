#include "shell.h"

/**
 * token_command - get token of the string
 * @line: string
 *
 * Return: integer
 */

char **token_command(char *line)
{
	char **token = NULL;
	char *space = " \t\r\n";
	int size = 0;
	int i = 0;

	if (line == NULL)
	{
		return (NULL);
	}
	size = count_word(line, " ");

	token = malloc(sizeof(char *) * size + 2);
	if (!token)
	{
		free(token);
		return (NULL);
	}
	token[0] = strtok(line, space);

	for (i = 1; i < size; i++)
	{
		token[i] = strtok(NULL, space);
	}

	return (token);
}
