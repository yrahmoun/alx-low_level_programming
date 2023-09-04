#include "main.h"

/**
 * str_concat - concatinates two string in a new created string
 * @s1: string 1
 * @s2: string 2
 * Return: new creted string
 */

char *str_concat(char *s1, char *s2)
{
	int n1 = 0;
	int n2 = 0;
	int i = 0;
	int j = 0;
	char *s;

	if (!s1)
		s1 = "";
	if (!s2)
		s2 = "";
	while (s1[n1])
		n1++;
	while (s2[n2])
		n2++;
	s = malloc(n1 + n2 + 1);
	if (!s)
		return (0);

	while (s1[i])
	{
		s[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		s[i] = s2[j];
		i++;
		j++;
	}
	s[i] = '\0';
	return (s);
}
