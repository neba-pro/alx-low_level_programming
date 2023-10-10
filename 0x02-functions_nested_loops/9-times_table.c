#include "main.h"

/**
 * times_table - prints 9 * 9 table
 *
 * Return: 0 if completed successfully
 */

void times_table(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (i * j > 9)
			{
				if (i *  j == 81)
				{
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
				}
				else
				{
					_putchar((i * j) / 10 + '0');
					_putchar((i * j) % 10 + '0');
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((i * j) + '0');
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
