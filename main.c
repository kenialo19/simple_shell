#include "shell.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

/**
 * main - execute functions.
 *
 * Return: Void.
 */

int main(void)
{
	char *line;
	char **arg;

	count = 0;
	while (1)
	{
		line = read_line();
		msg = malloc(sizeof(char) * _strlen(line) + 1);
		_strcpy(msg, line);
		count++;
		/*printf("line- main->[%s]", line);
		printf("msg- main->[%s]", msg);*/
		if (line == NULL)
		{
			printf("line- main->[%s]", line);
			return (-1);
		}

		arg = token_command(line);
		/* for (j = 0; arg[j]; j++) printf("%s\n", arg[j]); print arguments in separate lines*/
		child_exec(arg);
		free(msg);
	}
	free(line);
	free(arg);
	return (0);
}
