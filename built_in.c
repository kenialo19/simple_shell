#include "shell.h"

/**
 * _env - write variable enviromen.
 *
 * Return: Always int.
 */

int _env(void)
{
	int i = 0;
	char b = '\n';

	while (environ[i] != NULL)
	{
		write(1, environ[i], (_strlen(environ[i]) + 1));
		write(1, &b, 1);
		i++;
	}
	return (0);
}

/**
 * _dep_exit - exit command.
 *
 * Return: nothing.
 */

int _dep_exit(void)
{
	return (1);
}
