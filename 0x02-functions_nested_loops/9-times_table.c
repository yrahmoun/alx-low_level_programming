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
			if (j != 0)
			{
				_putchar(',');
				_putchar(' ');
				if (res < 10)
					_putchar(' ');
			}
			if (res >= 10)
				_putchar(res / 10 + 48);
			_putchar(res % 10 + 48);
			j++;
		}
		_putchar('\n');
		i++;
	}
}
