#include "main.h"

/**
 * print_to_98 - displays number up to 98
 * @n: parameter passed from user
 * Return: 0 if completed successfully
 */

void print_to_98(int n)
{
	int i;

	if (n > 98)
	{
		for (i = n; i > 98; i--)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar('\n');
	}
	else if (n == 98)
	{
		_putchar(n / 10 + '0');
		_putchar(n % 10 + '0');
		_putchar('\n');
	}
	else
	{
		for (i = n; i < 98; i++)
		{
			_putchar(i / 10 + '0');
			_putchar(i % 10 + '0');
			_putchar(',');
			_putchar(' ');
		}
		_putchar(i / 10 + '0');
		_putchar(i % 10 + '0');
		_putchar('\n');
	}
}
