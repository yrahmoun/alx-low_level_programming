#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate multiplication
 * @ac: argument number
 * @av: arguments
 * Return: 1 or 0
 */

int main(int ac, char **av)
{
	int a, b;

	if (ac != 3)
	{
		printf("Error\n");
		return (1);
	}
	a = atoi(av[1]);
	b = atoi(av[2]);
	printf("%d\n", a * b);
	return (0);
}
