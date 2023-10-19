#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses array
 * @a: oringinal array
 * @n: number of array elements
 */

void reverse_array(int *a, int n)
{
	int i;

	if (n == 0)
		printf("\n");
	else
	{
		int j = n - 1, c;

		for (i = 0; i < n / 2; i++)
		{
			c = a[i];
			a[i] = a[j];
			a[j] = c;
			j--;
		}
	}
}
