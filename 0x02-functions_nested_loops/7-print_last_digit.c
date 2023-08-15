#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @n: number checked
 *
 * Return: last digit
 */

int print_last_digit(int n)
{
	int last;

	if (n < 0)
		n *= -1;
	last = n % 10;
	_putchar(last + 48);
	return (last);
}

