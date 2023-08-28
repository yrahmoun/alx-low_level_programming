#include "main.h"

/**
 * _strchr - locates first occurance of a character in a string
 * @s: string
 * @c: character to find
 * Return: pointer to the first occurance or null
 */

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (0);
}
