#include "variadic_functions.h"

/**
 * sum_them_all - sums all the parameters
 * @n: number of elements
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;
	va_list p;

	if (!n)
		return (0);
	va_start(p, n);
	while (i < n)
	{
		sum += va_arg(p, unsigned int);
		i++;
	}
	va_end(p);
	return (sum);
}
