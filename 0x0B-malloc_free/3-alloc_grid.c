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
	int i, j, k, l = 0;
	int **arr;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}
	arr = malloc(sizeof(int *) * height);
	for (i = 0; i < height; i++)
	{
		*(arr + i) = malloc(width * sizeof(int));
		if (*(arr + i) == 0)
		{
			l = 1;
			break;
		}
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	if (l == 1)
	{
		for (k = 0; k <= i; k++)
		{
				free(*(arr + k));
			}
		free(arr);
	}
	return (arr);
}
