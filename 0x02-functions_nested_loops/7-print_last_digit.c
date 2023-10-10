#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @c: passed character from a user
 * Return: 0 if completed successfully
 */

int print_last_digit(int c)
{
	int conv;

	if (c > 0)
	_putchar(c % 10 + '0');
	else if (c == 0)
		_putchar(48);
	else
	{
		conv = -1 * c;
		_putchar(conv % 10 + '0');
	}
	return (0);
}
