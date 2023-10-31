#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates array with size of size
 * @size: size of array to be created
 * @c: initializing character
 * Return: a pointer to the created array;
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *new;

	if (size == 0)
		return (NULL);
	else
	{
		new = malloc(sizeof(unsigned int) * size);
		for (i = 0; i < size; i++)
			new[i] = c;
		new[i] = '\0';
	}
	return (new);
i}
