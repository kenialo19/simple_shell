#include "shell.h"

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

	if (src == NULL)
		printf("error");

	for (; src[len] != '\0'; len++)
	{
		dest[len] = src[len];
	}
	dest[len] = '\0';
	return (dest);
}

#define OUT 0
#define IN 1

/**
 * count_word- word counter
 * @str: string a count.
 *
 * Return: a word.
 */
int count_word(char *str, char *delim)
{
	int count = OUT;
	int word = 0;

	while (*str)
	{
		if (*str == *delim || *str == '\n' || *str == '\t')
		{
			count = OUT;
		}
		else if (count == OUT)
		{
			count = IN;
			word++;
		}
		str++;
	}
	return (word);
}

/**
 *  *_strncpy - copies a string.
 * @dest: string.
 * @src: string.
 * @n: whole
 *
 * Return: dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a = strlen(dest);
	int b = strlen(src);
	int k, s;

	for (k = 0; k < n; k++)
	{
		dest[k] = src[k];
	}
	for (s = b; s < n; s++)
	{
		dest[s] = 0;
	}
	dest[a] = 0;
	return (dest);
}
