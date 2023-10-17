#include "main.h"

/**
 * puts_half - prints half of the passed string
 * @str: string to be truncated
 *
 * Return: 0 if com0leted successfully
 */

void puts_half(char *str)
{
	int i, j, n;

	for (i = 0; str[i] != '\0'; i++)
	{
	}
	if (i % 2 == 0)
	{
		n = i / 2;
		for (j = n; j < i; j++)
			_putchar(str[j]);
	}
	else
	{
		n = (i - 1) / 2;
		for (j = n + 1; j < i; j++)
			_putchar(str[j]);
	}
	_putchar('\n');
}
