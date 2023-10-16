#include "main.h"

/**
 * _puts - prints the passed string to stdout
 * @str: passed string
 *
 */

void _puts(char *str)
{
	int length, j;

	for (length = 0; str[length] != '\0'; length++)
	{
	}
	for (j = 0; j < length; j++)
		_putchar(str[j]);
	_putchar('\n');
}
