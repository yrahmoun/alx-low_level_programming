#include "main.h"

/**
 * cap_string - capitalizes a string
 * @s: string
 * Return: s
 */

char *cap_string(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[0] >= 'a' && s[0] <= 'z')
			s[0] -= 32;
		if (i > 0 && s[i - 1] <= 32)
		{
			if (s[i] >= 'a' && s[i] <= 'z')
				s[i] -= 32;
		}
		i++;
	}
	return (s);
}
