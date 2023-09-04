#include "main.h"

/**
 * create_array - creates an array and initializes it with a character
 * @size: size of array
 * @c: character to initialize with
 * Return: array created
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i = 0;
	char *s;

	if (!size)
		return (0);
	s = malloc(size);
	if (!s)
		return (0);
	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
