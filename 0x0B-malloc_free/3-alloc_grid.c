#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - allocates memory
 * @width: width of 2D array
 * @height: height of 2D array
 * Return: pointer to a memory location
 */

int **alloc_grid(int width, int height)
{
	int i, j;
	int arr[width][height];

	for (i = 0; i < width; i++)
	{
		for (j = 0; j < height; j++)
		{
			arr[i][j] = 0;
		}
		_putchar('\n');
	}
	return (arr);
}
