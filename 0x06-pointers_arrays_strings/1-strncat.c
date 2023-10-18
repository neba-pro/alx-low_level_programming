#include "main.h"

/**
 * _strncat - concatenates two strings together
 * @dest: destination string
 * @src: source string
 * @n: number of characters to be truncated
 * Return: Returns the pointer to dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	for (k = 0; k < n; k++)
	{
		dest[i + k] = src[k];
	}	
	return (dest);
}
