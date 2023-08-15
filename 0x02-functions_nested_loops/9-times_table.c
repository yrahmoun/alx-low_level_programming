#include "main.h"

/**
 * times_table - prints the times table
 *
 */

void times_table(void)
{
	int res;
	int i;
	int j;

	i = 0;
	res = 0;
	while (i < 10)
	{
		j = 0;
		while (j < 10)
		{
			res = i * j;
			if (res >= 10)
				_putchar(res / 10 + 48);
			_putchar(res % 10 + 48);
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}
