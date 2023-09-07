#include "main.h"

/**
 * malloc_checked - allocates memory
 * @b: size to allocate
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	int *s;

	s = malloc(b);
	if (!s)
		exit(98);
	return (s);
}
