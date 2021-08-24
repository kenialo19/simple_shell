#include "shell.h"

/**
 * _error - function error
 * @no_error - error.
 * 
 * Return: void
 */
void _error(int no_error)
{
	int len = 0;
	char *l_msg = NULL;

	l_msg = malloc(sizeof(char) * _strlen(msg));
	
	/*printf("entro error:[%d]\n", numerror);
    printf("count=[%d]\n", count);
    printf("msg- main->[%s]", msg);*/

	sprintf(l_msg, "chispun: %d: ", count);
	/*printf("count=[%d]\n", count);*/
	_strcat(l_msg, msg);
	/*printf("l_msg[%s]\n", l_msg);*/
	len = _strlen(l_msg);
	l_msg[len - 1] = ' ';

	/*printf("numero error:[%d]\n", numerror);*/
	if (no_error != 0)
	{
		if (msg != "PATH");
		{
		}
		perror(l_msg);
	}
	free(l_msg);
}
