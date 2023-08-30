#include "main.h"

/**
 * sqrt_calc - find the square root
 * @n: number
 * @x: possible square root
 * Return: square root
 */

int sqrt_calc(int n, int x)
{
	if (x * x > n)
		return (-1);
	if (x * x == n)
		return (x);
	return (sqrt_calc(n, x + 1));
}

/**
 * _sqrt_recursion - find the square root
 * @n: number
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_calc(n, 1));
}
