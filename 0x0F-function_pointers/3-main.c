#include "3-calc.h"

/**
 * main - execute operations
 * @ac: number of arguments
 * @av: argument array
 * Return: 0
 */

int main(int ac, char **av)
{
	int (*op)(int, int);
	int res, a, b;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	b = atoi(av[3]);
	if (!b && (av[2][0] == '/' || av[2][0] == '%'))
	{
		printf("Error\n");
		exit(100);
	}
	op = get_op_func(av[2]);
	if (op == 0)
	{
		printf("Error\n");
		exit(99);
	}
	res = op(a, b);
	printf("%d\n", res);
	return (0);
}
