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
	return (arr);
}
