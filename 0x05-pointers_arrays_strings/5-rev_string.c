#include "main.h"

/**
 * rev_string - prints the passed string in reverse
 * @s: string to be reversed
 *
 */

void rev_string(char *s)
{
	int length, j;

	for (length = 0; s[length] != '\0'; length++)
	{
	}
	for (j = length - 1; j >= 0; j--)
	_putchar(s[j]);
	_putchar('\n');
}

