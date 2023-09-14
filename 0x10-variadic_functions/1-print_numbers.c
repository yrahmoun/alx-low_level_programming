#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - prints numbers
 * @separator: separate between numbers
 * @n: number of elements
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list p;

	va_start(p, n);
	while (i < n)
	{
		printf("%d", va_arg(p, unsigned int));
		if (i + 1 != n && separator)
			printf("%s", separator);
		i++;
	}
	printf("\n");
}
