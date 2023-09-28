#include "main.h"
#include "unistd.h"

/**
 * _putchar - prints character
 * @c: character to print
 * Return: 0
 */

int _putchar(char c)
{
	write(1, &c, 1);
	return (0);
}
