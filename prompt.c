#include "shell.h"

/**
 * read_line - print prompt.
 *
 * Return: pointer.
 */

char *read_line()
{
	char *line = NULL;
	char *prompt = "$ ";
	size_t linez = 0;
	int c = 0;

	write(STDOUT_FILENO, prompt, _strlen(prompt));
	c = getline(&line, &linez, stdin);

	if (c == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}
