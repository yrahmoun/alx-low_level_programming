#include "main.h"

/**
 * _isupper - check if c is uppercase
 * @c: char to check
 * Return: either 1 or 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
