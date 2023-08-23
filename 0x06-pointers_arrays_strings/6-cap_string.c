#include "main.h"

/**
 * cap_string - capitalizes a string
 * @s: string
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;
	char p[] = ",;.!?\"(){}";
	int j;

	while (s[i])
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		j = 0;
		while (p[j])
		{
			if ((i > 0 && s[i - 1] <= 32) || s[i] == p[j])
			{
				if (s[i] >= 'a' && s[i] <= 'z')
					s[i] -= 32;
			}
			j++;
		}
		i++;
	}
	return (s);
}
