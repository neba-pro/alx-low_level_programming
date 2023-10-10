#include "main.h"

/**
 * print_sign - prints the sign of the passed character
 * @n: character passed from the user
 * Return: 0 or 1
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}

