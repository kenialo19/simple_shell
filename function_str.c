#include "main.h"

/**
 * _strlen - return lenght of the string.
 * @s: string
 *
 * Return: Always int.
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (*(s + i) != '\0')
	{
	i++;
	}
	return (i);
}

/**
 * _strcmp - compare two strings.
 * @s1: string1
 * @s2: string2
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] != s2[i])
	{
		return (s1[i] - s2[i]);
	}
	return (0);
}

/**
 * _strcpy - copies the string pointed to by src into dest
 * @dest: destination of the copy
 * @src: source of the copy
 *
 * Return: char pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;

	for ( ; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = 0;
	return (dest);
}


