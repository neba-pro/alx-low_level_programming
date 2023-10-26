#include "main.h"

/**
 * factorial - computes the factorial of a number
 * @n: number to be computed
 * Return: the final result of computation
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
