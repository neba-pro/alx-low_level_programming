#include "main.h"

/**
 * _islower - entry point
 * @c: character passed from the user
 * Return: 0 if completed successfully
 *
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	return (0);
}
