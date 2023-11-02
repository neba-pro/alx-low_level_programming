#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - returns the allocated space
 * @b: size of elements
 * Return: returns the a pointer to a location
 */

void *malloc_checked(unsigned int b)
{
	int *arr;

	arr = malloc(b);
	if (arr == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (arr);
}
