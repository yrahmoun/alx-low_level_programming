#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_strings - prints strings
 * @separator: separates between strings
 * @n: number of elements
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *s;
	va_list p;

	va_start(p, n);
	while (i < n)
	{
		s = va_arg(p, char *);
		if (s)
			printf("%s", s);
		else
			printf("(nil)");
		if (separator && i + 1 != n)
			printf("%s", separator);
		i++;
	}
	printf("\n");
	va_end(p);
}
