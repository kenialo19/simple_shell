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
	
	/*printf("isaty:[%d]\n", isatty(STDIN_FILENO));*/
	if (isatty(STDIN_FILENO) != 0)
		write(STDOUT_FILENO, prompt, _strlen(prompt));
	c = getline(&line, &linez, stdin);

	if (feof(stdin))
	{
		exit(EXIT_SUCCESS);
	}

	if (c == -1)
	{
		free(line);
		return (NULL);
	}
	return (line);
}

