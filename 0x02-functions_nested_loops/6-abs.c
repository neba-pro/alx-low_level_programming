#include "main.h"

/**
 * _abs - computes the absolute value of a number
 * @c: passed integer
 * Return: 0 if completed successfully
 */

int _abs(int c)
{
	if (c > 0)
		return (c);
	else if (c == 0)
		return (0);
	else
		return (-1 * c);
	return (0);
}
