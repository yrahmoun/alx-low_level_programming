#include "main.h"

/**
 * leet - encode a string
 * @s: string
 * Return: encoded string
 */

char *leet(char *s)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int i = 0;
	int j;

	while (s[i])
	{
		j = 0;
		while (a[j])
		{
			if (s[i] == a[j])
				s[i] = b[j];
			j++;
		}
		i++;
	}
	return (s);
}
