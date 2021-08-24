#include "shell.h"

/**
 * _strlen - return lenght of the string.
 * @s: string
 *
 * Return: Always int.
 */

int _env(void)
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

int _dep_exit(void)
{
	return (1);
}
