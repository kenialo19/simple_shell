#include "shell.h"

/**
 * _itoa - converts integer to string
 * @i: integer
 * @str: string
 * Return: void.
 */
void _itoa(long i, char *str)
{
	int power = 0, j = 0;

	j = i;
	for (power = 1; j > 10; j /= 10)
		power *= 10;

	for (; power > 0; power /= 10)
	{
		*str = '0' + i / power;
		printf("str[%s]- %ld - %d \n", str,i,power);
		str++;
		i %= power;
	}
	*str = '\0';
}

/**
 * _error - function error
 * @no_error:  error.
 * @msg: wrong command
 * @count: execution count
 *
 * Return: void
 */
void _error(int no_error, char *msg, long count)
{
	int len = 0;
	char *l_msg = NULL;
	char *msg_nof = ": not found\n";
	char buff[20];

	l_msg = malloc((sizeof(char) * _strlen(msg)) + 1);
	if (l_msg == NULL)
	{
		free(l_msg);
		return;
	}
	_itoa(count, buff);
	_strcat(l_msg, "hsh: ");
	_strcat(l_msg, buff);
	_strcat(l_msg, ": ");
	_strcat(l_msg, msg);

	len = _strlen(l_msg);
	l_msg[len - 1] = '\0';

	if (no_error == (14))
	{
		write(1, l_msg, (len + 1));
		write(1, msg_nof, 13);
	}
	else
	{
		perror(l_msg);
	}
	free(l_msg);
}
