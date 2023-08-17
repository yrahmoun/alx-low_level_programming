#include "main.h"

/**
 * more_numbers - print from 0 to 14
 */

void more_numbers(void)
{
	int i;
	int n = 0;

	while (n < 10)
	{
		i = 0;
		while (i < 15)
		{
			if (i >= 10)
				_putchar(i / 10 + 48);
			_putchar(i % 10 + 48);
			i++;
		}
		_putchar('\n');
		n++;
	}
}
