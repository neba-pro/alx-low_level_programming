#include "main.h"

/**
 * _strncpy - copies n bytes of string
 * @dest: destination string
 * @src: source string
 * @n: bytes of string to be copied
 * Return: returns a pointer to dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int j, k;

	for (k = 0; src[k] != '\0'; k++)
	{
	}
	for (j = 0; j < n; j++)
	{
		dest[j] = src[j];
	}
	dest[k] = '\0';
	return (dest);
}
