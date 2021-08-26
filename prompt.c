#include "shell.h"

/**
 * read_line - print prompt.
 *
 * Return: pointer.
 */

char *read_line()
{
	char *line = NULL;
	char *prompt = "chispun$ ";
	size_t linez = 0;
	int c = 0;

	if (isatty(STDIN_FILENO) != 0)
		write(STDOUT_FILENO, prompt, _strlen(prompt));

	c = getline(&line, &linez, stdin);
	if (line == NULL)
	{
		free(line);
		return (NULL);
	}
	if (c == -1)
	{
		write(1, "\n", 1);
		free(line);
		return (NULL);
	}
	return (line);
}
