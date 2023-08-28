#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack: main string
 * @needle: string to locate
 * Return: pointer to first occurance
 */

char *_strstr(char *haystack, char *needle)
{
	int i = 0;
	int j;

	while (haystack[i])
	{
		j = 0;
		while (haystack[i + j] == needle[j])
		{
			if (needle[j + 1] == '\0')
				return (&haystack[i]);
			j++;
		}
		i++;
	}
	return (0);
}
