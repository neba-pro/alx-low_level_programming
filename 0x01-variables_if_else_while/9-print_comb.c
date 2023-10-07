#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 if completed successfully
 *
 */

int main(void)
{
	int i;

	for (i = 48; i < 57; i++)
	{
		if (i <= 56)
		{
			putchar(i);
			putchar(',');
			putchar(' ');
	}
	putchar('\n');
	}
	return (0);
}
