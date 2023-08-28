#include "main.h"

/**
 * _memset - fill memory with a constant byte
 * @s: string
 * @b: character to fill with
 * @n: number of bytes
 * Return: new string
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
