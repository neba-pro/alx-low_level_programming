#include <stdio.h>
#include "main.h"

/**
 * print_array - prints n members of the array
 * @a: array pointer
 * @n: number of elements to be printed to stdout
 */

void print_array(int *a, int n)
{
	int i;

	for (j = 0; a[i]; i++)
	{
	}
	for (i = 0; i < n; i++)
	{
		if (n != 1)
		{
			if (i != n - 1)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
		else
			printf("%d\n", a[0]);
	}
}
