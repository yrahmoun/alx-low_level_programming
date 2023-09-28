#include "main.h"

/**
 * set_bit - sets bit at index to 1;
 * @n: number
 * @index: index
 * Return: 1 or -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shifts;
	
	shifts = sizeof(unsigned long int) * 8;
	if (index > shifts)
		return (-1);
	*n |= (1 << index);
	return (1);
}
