#include "main.h"

/**
 * _strcpy - copies the string from src to dest
 * @dest: destination pointer
 * @src: source pointer
 * Return: returns the final pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i] != '\0'; i++)
	{
	}
	for (j = 0; j < i; j++)
		dest[j] = src[j];
	dest[i] = '\0';
	return (dest);
}
