#include "main.h"

/**
 * array_range - creates an array pf integers
 * @min: minimum value of the array
 * @max: maximum value
 * Return: pointer to the array created
 */

int *array_range(int min, int max)
{
	int i = 0;
	int size;
	int *arr;

	if (min > max)
		return (0);
	size = max - min + 1;
	arr = malloc(size * sizeof(int));
	if (!arr)
		return (0);
	while (i < size)
	{
		arr[i] = min + i;
		i++;
	}
	return (arr);
}
