#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_all - prints anything
 * @format: type of parameters passed
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	va_list p;
	char *s;
	int flag;

	va_start(p, format);
	while (format[i])
	{
		flag = 0;
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(p, int));
				flag = 1;
				break;
			case 'i':
				printf("%d", va_arg(p, int));
				flag = 1;
				break;
			case 'f':
				printf("%f", va_arg(p, double));
				flag = 1;
				break;
			case 's':
				s = va_arg(p, char *);
				if (!s)
					s = "(nil)";
				printf("%s", s);
				flag = 1;
				break;
		}
		if (format[i + 1] && flag)
			printf(", ");
		i++;
	}
	printf("\n");
}
