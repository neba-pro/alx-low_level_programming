#include "main.h"

/**
 * _strcat - concatenates two strings together
 * @dest: destination string
 * @src: source string
 * Return: Returns the pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	int i, j, k;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
	}
	for (k = 0; k < j; k++)
	{
		dest[k + i] = src[k];
	}
	dest[i + j] = '\0';
	return (dest);
}
