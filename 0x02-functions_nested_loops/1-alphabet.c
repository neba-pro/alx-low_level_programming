#include "main.h"

/**
 * print-alphabet - displays the alphabet in lowercase
 *
 * Return: 0 if completed successfully
 *
 */

void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
		_putchar(i);
	_putchar('\n');
	return (0);
}
