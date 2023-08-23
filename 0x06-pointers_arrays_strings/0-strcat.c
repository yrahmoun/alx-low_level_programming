#include "main.h"

/**
 * _strcat - appends the src string to the dest string
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int n = 0;
	int i = 0;

	while (dest[n])
		n++;
	while (src[i])
	{
		dest[n + i] = src[i];
		i++;
	}
	dest[n + i] = '\0';
	return (dest);
}
