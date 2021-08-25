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
	char *msg;
	int count;

	count = 0;
	while (1)
	{
			line = read_line();
		count++;
		if (line != NULL && line[0] != '\n')
		{
			msg = malloc(sizeof(char) * _strlen(line) + 1);
			_strcpy(msg, line);

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
			child_exec(arg, msg, count);
			free(msg);
			free(arg);
			free(line);
		}
	}
	return (0);
}
