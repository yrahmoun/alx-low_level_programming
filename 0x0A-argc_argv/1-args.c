#include <stdio.h>

/**
 * main - print argument number
 * @ac: argument number
 * @av: arguments
 * Return: 0
 */

int main(int ac, char **av)
{
	(void)av;
	printf("%d\n", ac - 1);
	return (0);
}
