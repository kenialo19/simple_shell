#include "shell.h"

/**
 * *builtin - allocate memory.
 * @cmd: command
 * @dir: dir path
 *
 * Return: a char.
 */

char *builtin(char *cmd, char *dir)
{
	char *c;
	size_t m;

	m = _strlen(dir) + _strlen(cmd);
	c = malloc(sizeof(char) * m + 2);
	if (c == NULL)
	{
		return (NULL);
	}
	memset(c, 0, m);
	c = _strcat(c, dir);
	c = _strcat(c, "/");
	c = _strcat(c, cmd);

	return (c);
}

/**
 * _path_dir - values path.
 * @cmd: line entered.
 *
 * Return: a char.
 */

char *_path_dir(char *cmd)
{
	char *path, *dir;
	char *colon = ":\n";
	int j;
	char *comand;
	struct stat st;
	/*char *dest;*/

	if (stat(cmd, &st) == 0)
		return (cmd);

	path = _getenv("PATH");
	dir = strtok(path, colon);
	for (j = 1; dir != NULL; j++)
	{
		comand = builtin(cmd, dir);
		if (stat(comand, &st) == 0)
		{
			dir = _strdup(comand);
			return (comand);
		}
		dir = strtok(NULL, colon);
	}
	free(comand);
	free(dir);
	return (NULL);
}
