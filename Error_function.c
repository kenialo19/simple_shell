#include "shell.h"

/**
 * _error - function error
 * @no_error:  error.
 *
 * Return: void
 */
void _error(int no_error)
{
	int len = 0;
	char *l_msg = NULL;
	char *msg_nof = ": not found\n";

	l_msg = malloc(sizeof(char) * _strlen(msg));

	sprintf(l_msg, "chispun: %d: ", count);

	_strcat(l_msg, msg);

	len = _strlen(l_msg);
	l_msg[len - 1] = '\0';

	if (no_error == (14))
	{
		write(1, l_msg, len);
		write(1, msg_nof, 13);
	}
	else
	{
		perror(l_msg);
	}
	free(l_msg);
}
