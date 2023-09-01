#include "main.h"

/**
 * _strncat - appends n characters from src string to the dest string
 * @dest: destination string
 * @src: source string
 * @n: number of characters to append
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int i = 0;

	while (dest[x])
		x++;
	while (src[i] && i < n)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}
