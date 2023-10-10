#include "main.h"

/**
 * _isalpha - checks if character is alphabetic
 * @c: passed character from the user
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
	return (0);
}
