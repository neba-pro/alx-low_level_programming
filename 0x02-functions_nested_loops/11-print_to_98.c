#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - displays number up to 98
 * @n: parameter passed from user
 * Return: 0 if completed successfully
 */

void print_to_98(int n)
{
	int i;

	if (n >= 98)
	{
		for (i = n; i > 98; i--)
			printf("%d, ", i);
		printf("%d\n", i);
	}
	else
	{
		if (n > 0)
		{
			for (i = n; i < 98; i++)
				printf("%d, ", i);
			printf("%d\n", i);
		}
		else
		{
			for (i = n; i < 98; i++)
				printf("%d, ", i);
			printf("%d\n", i);
		}
	}
}
