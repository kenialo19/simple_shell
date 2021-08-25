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
	int (*b)();

	count = 0;
	while (1)
	{
		line = read_line();
		msg = malloc(sizeof(char) * _strlen(line) + 1);
		_strcpy(msg, line);
		count++;

		if (line == NULL)
		{
			return (-1);
		}
		arg = token_command(line);

		b = _get_built(arg[0]);
		if (b)
		{
			if (b() == 1)
			{
				return (1);
			}
			continue;
		}
		child_exec(arg);
		free(msg);
		free(arg);
		free(line);
	}
	return (0);
}
