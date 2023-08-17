#include "main.h"

/**
 * print_square - prints a square
 * @size: size of square
 */

void print_square(int size)
{
	int i = 1;
	int j;

	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			_putchar('#');
			j++;
		}
		if (i == size)
			break;
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
