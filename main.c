#include "shell.h"

/**
 * main - execute functions.
 * Return: Void.
 */
int main(void)
{
	char *line, *msg;
	char **arg;
	int (*b)();
	long count = 0;
	int i, j = 0;

	signal(SIGINT, signal_c);
	while (1)
	{
		line = read_line();
		count++;
		if (line == NULL)
			return (0);
		j = 0;
		for (i = 0; line[i] != '\n'; i++)
		{
			if (line[i] != ' ')
			{
				j = 1;
				break; }
		}
		if (line != NULL && line[0] != '\n' && j != 0)
		{
			msg = malloc(sizeof(char) * _strlen(line) + 1);
			if (msg == NULL)
			{
				free(msg);
				return (0);
			}
			_strcpy(msg, line);
			arg = token_command(line);
			b = _get_built(arg[0]);
			if (b)
			{
				if (b() == 1)
				{
					free(line), free(msg), free(arg), exit(127); }
				continue; }
			child_exec(arg, msg, count);
			free(msg), free(arg); }
		free(line);
	}
	return (0);
}
