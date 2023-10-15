#include <stdio.h>
#include "main.h"

/**
 * main - entry to the whole program
 *
 * Return: 0 if completed successfully
 */

int main(void)
{
	long int fib1, fib2, list;
	int i;

	fib1 = 1;
	fib2 = 2;
	for (i = 1; i <= 50; i++)
	{
		if (i < 3)
		{
			printf("%d, ", i);
		}
		else
		{
			if (i != 50)
			{
				list = fib1 + fib2;
				printf("%ld, ", list);
				fib1 = fib2;
				fib2 = list;
			}
			else
			{
				list = fib1 + fib2;
				printf("%ld\n", list);
			}
		}
	}
	return (0);
}
