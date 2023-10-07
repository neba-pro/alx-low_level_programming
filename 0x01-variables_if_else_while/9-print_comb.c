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

	for (i = 48; i <= 57; i++)
	{
		
		putchar(i);
		if (i < 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
