#include "main.h"

/**
 * puts2 - prints every other character of a string
 * @str: string to be worked on
 *
 */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		_putchar(str[i + 2]);
	_putchar('\n');
}
