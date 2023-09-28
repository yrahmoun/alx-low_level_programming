#include "main.h"

/**
 * get_bit - gets bit at certain index
 * @n: number
 * @index: index to get bit from
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shifts;

	shifts = sizeof(unsigned long int) * 8 - 1;
	if (index > shifts)
		return (-1);
	return ((n >> index) & 1);
}
