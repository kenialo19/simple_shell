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

	/*printf("read_line-line=[%s]-linez=[%ld]-c=[%d]\n", line, linez, c);*/

	if (feof(stdin))
	{
		/*printf("read_line-Entro feof\n");*/
		exit(EXIT_SUCCESS);
	}

	if (c == -1)
	{
		printf("read_line-c == -1\n");
		free(line);
		return (NULL);
	}

    /*printf("read_line-SALIDA(line)\n");*/
	return (line);
}
