#include "main.h"

/**
 * _strlen_recursion - computes the length of the string
 * @s: string to be worked on
 * Return: the length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (1 + _strlen_recursion(s + 1));
	}
	return (0);
}
