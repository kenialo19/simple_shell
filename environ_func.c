#include "shell.h"

/**
 *  _getenv - get environ variable.
 * @name: name of variable
 *
 * Return: value of the variable.
 */

char *_getenv(const char *name)
{
	int i = 0;
	char *nombre, *var;environ
	int a = 0;

	a = strlen(name);

	while (environ[i] != NULL)
	{
		strncpy(nombre, environ[i], a);
		nombre[a] = '\0';

		if ((strcmp(nombre, name)) == 0)
		{
			var = environ[i];
			if (var[a] == '=')
			{
				return (var);
			}
		}
		i++;
	}
	return (NULL);
}
