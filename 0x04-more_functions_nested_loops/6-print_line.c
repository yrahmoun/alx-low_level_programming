#include "main.h"

/**
 * print_line - print _ n times
 * @n: number of times to print _
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}
