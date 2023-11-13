#include "main.h"

/**
 *_abs - absolute value of a number
 *
 * @n: number being checked
 *
 * Return: absolute value of n
 */


int _abs(int n)
{
	if (n < 0)
		n *= -1;
	return (n);
}
