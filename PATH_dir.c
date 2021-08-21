#include "shell.h"

/**
 * _path_dir - values path.
 * @dir: 
 * 
 * Return: no se.
 */

char _path_dir(void)
{
	char *path = NULL, **dir = NULL, *cpypath = NULL;
	char *colon = ":";
	int lenght, j;

	path = _getenv("PATH");
	/*if (!path)
	{
		return (-1);
	}*/
	cpypath = _strcpy(cpypath, path);
	lenght = _strlen(path);
	dir = malloc(sizeof(char *) * (lenght + 1));
	/*if (!dir)
	{
		return (NULL);
	}*/
	dir[0] = strtok(path, colon);

	for (j = 1; j < lenght; j++)
	{
		dir[j] = strtok(NULL, colon);
		printf("%s\n", dir[j]);
	}
	dir[j] = NULL;
	free(dir);
	/*return (dir);*/
}
