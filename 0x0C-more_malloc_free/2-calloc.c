#include "main.h"

/**
 * _calloc - allocates memory and initializes with 0
 * @nmemb: number of elements
 * @size: size of elements
 * Return: pointer to the allocated array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	void *s;

	if (!nmemb || !size)
		return (0);
	s = malloc(nmemb * size);
	if (!s)
		return (0);
	while (i < nmemb * size)
	{
		((char *)s)[i] = 0;
		i++;
	}
	return (s);
}
