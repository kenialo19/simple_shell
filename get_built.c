#include "shell.h"

/**
 * *_get_built- get env and exit functions.
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
		if ((_strcmp(bin[i].vble, s)) == 0)
		{
			return (bin[i].b);
		}
		i++;
	}
	return (0);
}
