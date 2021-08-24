#include "shell.h"

char *builtin(char *cmd, char *dir)
{
	char *c;
	size_t m;

	m = _strlen(dir) + _strlen(cmd);
	c = malloc(sizeof(char) * m + 1);
	if (c == NULL)
		{
			return (NULL);
		}
	memset(c, 0, m);
	c = strcat(c, dir);
	c = strcat(c, "/");
	c = strcat(c, cmd);

	return (c);
}

/**
 * _path_dir - values path.
 * @dir: 
 * 
 * Return: no se.
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
		return(cmd);

	path = _getenv("PATH");
	dir = strtok(path, colon);
	for (j = 1; dir != NULL; j++)
	{
		comand = builtin(cmd, dir);
		if (stat(comand, &st) == 0)
		{
			dir = _strdup(comand);
			/*printf("%s\n", dir);*/
			return (comand);
			/*free(comand);
			free(path);
			return (0);*/
		}
		dir = strtok(NULL, colon);
	}
	free(comand);
	free (dir);
	return (NULL);
}
