#include "main.h"

/**
 * string_nconcat - concatinates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: size of string 2 to concatinate
 * Return: concatinated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0;
	unsigned int len2 = 0;
	unsigned int i = 0;
	unsigned int j = 0;
	char *str;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;
	if (n > len2)
		n = len2;
	str = malloc(len1 + n + 1);
	if (!str)
		return (0);
	while (i < len1)
	{
		str[i] = s1[i];
		i++;
	}
	while (j < n)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}
