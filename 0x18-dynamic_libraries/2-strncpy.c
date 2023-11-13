#include "main.h"

/**
 * _strncpy - copies n characters from src to dest
 * @src: source string
 * @dest: destination string
 * @n: number of characters
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
