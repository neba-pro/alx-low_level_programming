#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate the string passed
 * @str: string to be dupulicated
 * Return: a pointer to the dupulicated memory location
 */

char *_strdup(char *str)
{
	int i, j;
	char *new;

	if (str == NULL)
		return (NULL);
	for (j = 0; str[j] != '\0'; j++)
	{
	}
	new = (char *)malloc((sizeof(char) * j) + 1);
	for (i = 0; str[i] != '\0'; i++)
		new[i] = str[i];
	new[i] = '\0';
	return (new);
}
