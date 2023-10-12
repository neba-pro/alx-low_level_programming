#include "main.h"

/**
 * print_diagonal - prints \ diagonally
 * @n: number of \ to be printed
 */

void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for(j = 0; j < i - 1; j++)
			_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

