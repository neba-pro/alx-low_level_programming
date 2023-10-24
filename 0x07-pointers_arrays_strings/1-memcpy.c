#include "main.h"

/**
 * _memcpy - copies n bytes from src to dest
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to be filled in
 * Return: returns a pointer to a memory location
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int j = 0, k = 0;
	int i;

	if (n < k)
		_putchar('\0');
	else
	{
		for (i = 0; dest[i] != '\0'; i++)
		{
		}
		while (j < n)
		{
			dest[i + j] = src[j];
			j++;
		}
	}
	dest[i + j] = '\0';
	return (dest);
}
