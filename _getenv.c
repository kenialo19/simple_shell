#include "shell.h"

/**
 * _getenv - get a environ variable.
 * @name: environ variable
 *
 * Return: Always int.
 */

char *_getenv(const char *name)
{
	int i = 0;
	char *vble, *var;
	int a = 0;

	a = _strlen((char *)name);

	for (; environ[i] != NULL; i++)
	{
		vble = environ[i];
		var = _strchr(vble, '=');

		if (var && (((var - vble) == a) && !_strncmp(vble, (char *)name, a)))
		{
			return (var + 1);
		}
	}
	return (NULL);
}
