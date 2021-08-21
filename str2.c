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
 * _strncpy - copies a string in long array.
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
 * _strcpy - copies the string 2 in the string 1.
 * @dest: string 1
 * @src: string 2
 *
 * Return: Always 0.
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; *(src + i) != '\0'; i++)
	{
		*(dest + i) = *(src + i);
	}
	dest[i] = '\0';
	return (dest);
}
