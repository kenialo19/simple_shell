#include "shell.h"

/**
 * _strlen - return lenght of the string.
 * @s: string
 *
 * Return: Always int.
 */

extern char **environ;

int _env()
{
	int i = 0; 
	char b = '\n';

	while (environ[i] != NULL)
	{
		write(1, environ[i], _strlen(environ[i]));
		write(1, &b, 1);
		i++;
	}
	return (0);
}

/**
 * _exit - return lenght of the string.
 * @status: integer
 *
 * Return: nothing.
 */

void _exit(int status)
{
	struct stat st;
	char **arg;

	if (stat(arg[0], &st) == 0)
	{
		write(1, "", 0);
	}
}
