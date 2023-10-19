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
		_putchar('\n');
	else
	{
		for (i = n - 1; i >= 0; i--)
			_putchar(a[i]);
	}
	_putchar('\n');
}
