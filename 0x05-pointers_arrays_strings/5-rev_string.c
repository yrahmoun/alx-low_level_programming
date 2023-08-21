#include "main.h"

/**
 * len - find length of s
 * @s: string
 * Return: length
 */

int len(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}

/**
 * rev_string - reverses a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	int i = 0;
	int n;
	int tmp;

	n = len(s) - 1;
	while (i <= n / 2)
	{
		tmp = s[i];
		s[i] = s[n - i];
		s[n - i] = tmp;
		i++;
	}
}
