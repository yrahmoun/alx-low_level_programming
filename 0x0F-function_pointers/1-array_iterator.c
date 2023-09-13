#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * on each element of an array
 * @array: array to iterate over
 * @size: size of array
 * @action: pointer to function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i = 0;

	if (!action || !array)
		return;
	while (i < (int)size)
	{
		action(array[i]);
		i++;
	}
}
