#include "main.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: string to search
 * @accept: string containing the bytes to look for
 * Return: pointer to first occurance or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s)
	{
		j = 0;
		while (accept[j])
		{
			if (*s == accept[j])
				return (s);
			j++;
		}
		s++;
	}
	return (0);
}
