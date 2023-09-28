#include "main.h"

/**
 * get_bit - gets bit at certain index
 * @n: number
 * @index: index to get bit from
 * Return: bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int shifts = 0;
	unsigned long int num = n;

	while (num)
	{
		shifts++;
		num >>= 1;
	}
	shifts--;
	if (index > shifts)
		return (-1);
	return ((n >> index) & 1);
}
