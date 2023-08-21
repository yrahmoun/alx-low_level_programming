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
 * print_rev - prints string in reverse
 * @s: string
 */

void print_rev(char *s)
{
	int n;

	n = len(s) - 1;
	while (n >= 0)
	{
		_putchar(s[n]);
		n--;
	}
	_putchar('\n');
}
