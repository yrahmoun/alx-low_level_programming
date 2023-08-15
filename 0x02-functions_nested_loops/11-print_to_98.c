#include "main.h"

/**
 * print_number - Prints the number n
 * @n: Number to be printed
 *
 */

void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n < 10)
		_putchar(n + 48);
	else
	{
		print_number(n / 10);
		_putchar(n % 10 + 48);
	}
}

/**
 *print_to_98 - prints numbers from n to 98
 * @n: Starting number
 *
 */

void print_to_98(int n)
{
	print_number(n);
	if (n < 98)
	{
		n++;
		while (n <= 98)
		{
			_putchar(',');
			_putchar(' ');
			print_number(n);
			n++;
		}
	}
	else if (n > 98)
	{
		n--;
		while (n >= 98)
		{
			_putchar(',');
			_putchar(' ');
			print_number(n);
			n--;
		}
	}
	_putchar('\n');
}
