#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */
/**
 * main - entry point
 *
 * Return: return 0 if completed succesfully
 */
int main(void)
{
	int n, conv, last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of ");
	last_digit = n % 10;
	if (last_digit > 5)
	{
		printf("%d is %d and is greater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
		printf("%d is 0 and is 0\n", n);
	else
	{
		if (n < 0)
		{
			conv = -1 * n;
			last_digit = -1 * (conv % 10);
			printf("%d is %d and is less than 6 and not 0\n", n, last_digit);
		}
		else if (last_digit <= 5 && last_digit > 0)
			printf("%d is %d and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
