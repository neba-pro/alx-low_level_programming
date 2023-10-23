#include <stdio.h>
#include "main.h"

/**
 * _memset - sets n bytes of the constant b in the memory location
 * @b: constant byte
 * @n: number of time the constant byte to be filled
 * @s: string to be filled in
 * Return: a pointer to a memory location
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
	}
	for (j = 0; j < n; j++)
	{
		s[j] = b;
	}
	putchar('\0');
	return (s);
}
