#include "main.h"

/**
 * puts_half - prints half the string
 * @str: string
 */

void puts_half(char *str)
{
	int n;
	int i = 0;

	while (str[i])
		i++;
	n = (i - 1) / 2;
	i = n + 1;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
