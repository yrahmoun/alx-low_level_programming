#include "main.h"

/**
 * clear_bit - sets bit to 0 at index
 * @n: number
 * @index: given index
 * Return: 1 or -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int shifts;

	shifts = sizeof(unsigned long int) * 8;
	if (index > shifts)
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
