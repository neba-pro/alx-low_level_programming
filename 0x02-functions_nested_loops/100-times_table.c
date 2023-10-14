#include <stdio.h>
#include "main.h"

/**
 * print_times_table - prints times table n size
 * @n: size of table
 *
 */

void print_times_table(int n)
{
	int i, j;

	if (n < 0 || n > 15)
	{
	}
	else
	{
		if (n < 15)
		{
			for (i = 0; i <= n; i++)
			{
				printf("%d, ", 0);
				for (j = 1; j <= n - 1; j++)
					printf("%3d, ", i * j);
				printf("%3d\n", i * j);
			}
		}
	}
}
