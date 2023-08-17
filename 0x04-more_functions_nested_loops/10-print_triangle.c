#include "main.h"

/**
 * print_triangle - prints a triangle
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i = 1;
	int j;

	while (i <= size)
	{
		j = 1;
		while (j <= size)
		{
			if (j > size - i)
				_putchar('#');
			else
				_putchar(' ');
			j++;
		}
		if (i == size)
			break;
		_putchar('\n');
		i++;
	}
	_putchar('\n');
}
