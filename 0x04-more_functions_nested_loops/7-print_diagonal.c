#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: number
 */

void print_diagonal(int n)
{
	int i, j;

	i = 1;
	while (i <= n)
	{
		j = 1;
		while (j <= i)
		{
			if (j == i)
				_putchar('\\');
			else
				_putchar(' ');
			j++;
		}
		if (i == n)
			break;
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
