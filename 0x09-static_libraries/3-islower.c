#include "main.h"

/**
 *_islower - check if character is lowercase
 *@c: character being checked
 * Return: either 1 or 0
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}
