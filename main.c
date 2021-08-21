#include "shell.h"
char **token_command(char *line);

/**
 * main - execute functions.
 *
 * Return: Void.
 */
int main(void)
{
	char *line;
	char **arg;
	char *path_value;
	int j;


	while (1)
	{
		line = read_line();
		arg = token_command(line);
		for (j = 0; arg[j]; j++)
			printf("%s\n", arg[j]); /* print arguments in separate lines*/
		child_exec(arg);
		path_value =_path_dir();

	free(line);
	free(arg);
	return (0);
}

