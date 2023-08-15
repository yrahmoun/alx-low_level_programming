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

	last = n % 10;
	if (last < 0)
		last *= -1;
	_putchar(last + 48);
	return (last);
}

