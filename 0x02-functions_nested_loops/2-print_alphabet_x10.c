#include "main.h"

/**
 * print_alphabet_x10 - prints the aplphabet in lowercase 10 times
 *
 * Return: 0 if completed successfully
 *
 */

void print_alphabet_x10(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
	}
}
