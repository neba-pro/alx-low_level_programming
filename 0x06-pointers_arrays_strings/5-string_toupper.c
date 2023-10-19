#include <stdio.h>
#include "main.h"

/**
 * string_toupper - changes strings to uppercase
 * @a: passed string pointer
 * Return: returns a pointer to a string
 */

char *string_toupper(char *a)
{
	int i;

	for (i = 0; a[i] != '\0'; i++)
	{
		if (a[i] >= 97 && a[i] <= 122)
			a[i] = a[i] - 32;
	}
	return (a);
}
