#include <stdio.h>
#include "main.h"

/**
 * main - entry to the whole program
 *
 * Return: 0 if completed successfully
 */

int main(void)
{
	long int sum = 2, fib1, fib2, list;
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
			if ((list % 2 == 0) && (list <= 4000000))
			{
				sum = sum + list;
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
	}
	return (0);
}
