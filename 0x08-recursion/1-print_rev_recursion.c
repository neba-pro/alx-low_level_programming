#include "main.h"

/**
 * _print_rev_recursion - prints the string in reverse order using recurrsion
 * @s: a string to be reversed
 * Return: a pointer to the previous character
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
	_print_rev_recursion(s + 1);
	_putchar(*s);
	}
}
