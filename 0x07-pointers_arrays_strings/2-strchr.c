#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: a string to be looked in
 * @c: a character to be searched in the string
 * Return: a pointer to the first occurence of c
 */

char *_strchr(char *s, char c)
{
	char *n;
	int i;

	n = s;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] != c)
		{
			n++;
			continue;
		}
		else
			return (n);
	}
	return (0);
}
