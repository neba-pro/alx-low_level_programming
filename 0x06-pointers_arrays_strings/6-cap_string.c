#include <stdio.h>
#include "main.h"

/**
 * cap_string - capitalizes strings
 * @s: string to be capitalized
 * Return: a pointer to the string
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] == 46 || s[i] == 32) && (s[i + 1] >= 97 && s[i + 1] <= 122) && (s[i + 1] > 90))
		{
			s[i + 1] = s[i] + 32;
		}
	}
	return (s);
}
