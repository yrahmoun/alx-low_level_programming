#include "main.h"

/**
 * _strdup - copies an array in a new allocated space in memory
 * @str: string to copy
 * Return: copied string
 */

char *_strdup(char *str)
{
	int i = 0;
	int n = 0;
	char *s;

	if (!str)
		return (0);
	while (str[n])
		n++;
	s = malloc(n + 1);
	if (!s)
		return (0);
	while (str[i])
	{
		s[i] = str[i];
		i++;
	}
	s[i] = '\0';
	return (s);
}
