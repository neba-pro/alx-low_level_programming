#include <stddef.h>
#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatnates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: a pointer to the new memory location
 */

char *str_concat(char *s1, char *s2)
{
	char *new;
	int i, j, k, l;

	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	new = malloc(sizeof(char) * (i + j));
	for (k = 0; s1[k] != '\0'; k++)
		new[k] = s1[k];
	for (l = 0; s2[l] != '\0'; l++)
		new[k + l] = s2[l];
	new[i + j] = '\0';
	return (new);
}
