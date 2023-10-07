#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 if completed successfully
 */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
			continue;
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
