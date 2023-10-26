#include "main.h"

/**
 * _puts_recursion - puts the string to stdout
 * @s: a string to be displayed on the screen
 * Return: returns a pointer to the next character of the string
 */

void _puts_recursion(char *s)
{
	if (*s == 0)
		return;
	_putchar(*s);
	_puts_recursion(s + 1);
}
