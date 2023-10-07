#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Return: 0 if completed successfully
 */

int main(void)
{
	int i, j;

	for (i = 97; i <= 122; i++)
		putchar(i);
	for (j = 65; j <= 90; j++)
		putchar(j);
	putchar('\n');
	return (0);
}
