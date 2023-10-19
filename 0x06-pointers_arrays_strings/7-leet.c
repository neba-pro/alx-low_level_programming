#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to be encoded
 * Return: a pointer to a string
 */

char *leet(char *s)
{
	int i, j;
	char num_arr[] = {'4', '3', '0', '7', '1'};
	char upper_let[] = {'A', 'E', '0', 'T', 'L'};
	char lower_let[] = {'a', 'e', '0', 't', 'l'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == upper_let[j] || s[i] == lower_let[j])
			{
				s[i] = num_arr[j];
			}
		}
	}
	return (s);
}
