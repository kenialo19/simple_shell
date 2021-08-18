#include "shell.h"

/**
 * main - execute functions.
 *
 * Return: Void.
 */
int main(void)
{
	char *line;

	line = read_line();
	free(line);
	return (0);
}
