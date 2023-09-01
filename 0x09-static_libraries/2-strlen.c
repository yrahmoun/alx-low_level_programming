#include "main.h"

/**
 * _strlen - find length of a string
 * @s: string s
 * Return: length of string
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i])
		i++;
	return (i);
}
