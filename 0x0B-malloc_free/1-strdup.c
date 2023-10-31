#include <stddef.h>
#include "main.h"

/**
 * _strdup - duplicate the string passed
 * @str: string to be dupulicated
 * Return: a pointer to the dupulicated memory location
 */

char *_strdup(char *str)
{
	int i;
	char *new;

	if (str == NULL)
		return (NULL);
	new = malloc(sizeof(str));
	for (i = 0; str[i] != '\0'; i++)
		new[i] = str[i];
	new[i] = '\0';
	return (new);
}
