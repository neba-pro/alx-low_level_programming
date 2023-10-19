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
		for (i = n - 1; i >= 0; i--)
		{
			if ( i != 0)
				printf("%d, ", a[i]);
			else
				printf("%d\n", a[i]);
		}
	}
}
