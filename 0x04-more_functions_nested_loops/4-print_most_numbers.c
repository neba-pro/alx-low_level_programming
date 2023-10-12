#include "main.h"

/**
 * print_most_numbers - prints most of the numbers b/n 0 and 9
 *
 * Return: 0 if completed successfully
 */

void print_most_numbers(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		if (i != 50 && i != 52)
			_putchar(i);
	}
	_putchar('\n');
}
