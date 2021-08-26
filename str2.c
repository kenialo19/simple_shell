#include "shell.h"

/**
 * _strchr - localate a character in a string.
 * @s: string
 * @c: character
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; s[j] != '\0'; j++)
	{
		if (s[j] == c)
			return (&s[j]);
	}
	return (0);
}

/**
 * _strncmp - copies a string in long array.
 * @str1: string 1
 * @str2: string 2
 * @n: The maximum number of characters to be compared.
 *
 * Return: Always 0.
 */

int _strncmp(const char *str1, const char *str2, size_t n)
{
	size_t m;
	size_t p;

	for (m = 0; str1[m] != '\0' && m < n; m++)
	{
		p = str1[m] - str2[m];
		if (p != 0)
		{
			return (p);
		}
	}
	return (0);
}

/**
 * _strdup - duplicate the strins s.
 * @s: string to duplicate
 *
 * Return: string.
 */

char *_strdup(const char *s)
{
	int i;
	char *dup;
	int len;

	if (s == NULL)
	{
		return (NULL);
	}

	len = strlen(s);
	dup = malloc((sizeof(char) * len) + 1);
	if (dup == NULL)
	{
		return (NULL);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		dup[i] = s[i];
	}
	dup[i] = '\0';
	return (dup);
}

/**
 * _strcat - concatenate two strings.
 * @dest: first string
 * @src: string added to dest
 *
 * Return: string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

/**
 * signal_c - ANSI-C signal handling
 * @signal: variable
 *
 * Return: void
 */

void signal_c(__attribute__((unused))int signal)
{
	write(STDOUT_FILENO, "\n", 1);
	write(STDOUT_FILENO, "chispun$ ", 8);
}
