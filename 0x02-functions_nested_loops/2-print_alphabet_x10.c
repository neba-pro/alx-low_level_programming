#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 if completed successfully
 *
 */

int main(void)
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
	return (0);
}
