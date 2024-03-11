#include "search_algos.h"

/**
 * binary_search - searches for a value in an array of integers
 * @array: array to search in
 * @size: size of the array
 * @value: value to search for
 * Return: index of the value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	size_t left = 0;
	size_t right = size - 1;
	size_t mid;
	size_t i;

	if (!array)
		return (-1);
	while (left <= right)
	{
		mid = (left + right) / 2;
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
		}
		printf("\n");
		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
		right = mid - 1;
	}
	return (-1);
}
