#include "main.h"

/**
 * prime_check - find prime number
 * @n: number
 * @x: divisors
 * Return: 1 or 0
 */

int prime_check(int n, int x)
{
	if (x >= n)
		return (1);
	if (n % x == 0)
		return (0);
	return (prime_check(n, x + 1));
}

/**
 * is_prime_number - check if number is prime
 * @n: number
 * Return: 1 or 0
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_check(n, 2));
}
