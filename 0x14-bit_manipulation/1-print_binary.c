#include "main.h"

/**
 * print_binary - prints numberin binary
 * @n: number to convert
 */

void print_binary(unsigned long int n)
{
	unsigned long int num = n;
	int shift = 0;

	if (!n)
	{
		_putchar('0');
		return;
	}
	while (num)
	{
		shift++;
		num >>= 1;
	}
	shift--;
	while (shift >= 0)
	{
		if ((n >> shift) & 1)
			_putchar('1');
		else
			_putchar('0');
		shift--;
	}
}
