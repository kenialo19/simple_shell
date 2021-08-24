#include "shell.h"

/**
 * _strlen - return lenght of the string.
 * @s: string
 *
 * Return: Always int.
 */

int (*_get_built(char *s))()
{
	int i = 0;
	built_t bin[] = {
		{"env", _env},
		{"exit", _dep_exit},
		{NULL, NULL}};

	while (bin[i].vble != NULL)
	{
		if ((strcmp(bin[i].vble, s)) == 0)
		{
			return (bin[i].b);
		}
		i++;
	}
	return (0);
}