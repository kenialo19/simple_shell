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
		/*printf("ANTESarg- main->[%s]", arg[0]);*/
		arg = token_command(line);
		/*printf("arg- main->[%s]", arg[0]);*/
		/* for (j = 0; arg[j]; j++) printf("%s\n", arg[j]); print arguments in separate lines*/
		child_exec(arg);
		
		free(msg);
		free(arg);
		free(line);
	}
	return (0);
}
