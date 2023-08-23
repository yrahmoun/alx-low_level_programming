#include "main.h"

/**
 * reverse_array - reverses an array
 * @a: array
 * @n: number of elements
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int x = n - 1;
	int tmp;

	while (i < n / 2)
	{
		tmp = a[x];
		a[x] = a[i];
		a[i] = tmp;
		i++;
		x--;
	}
}
