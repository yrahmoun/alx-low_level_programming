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
	int res;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (av[2][1])
	{
		printf("Error\n");
		exit(99);
	}
	op = get_op_func(av[2]);
	if (op == 0)
	{
		printf("Error\n");
		exit(99);
	}
	res = op(atoi(av[1]), atoi(av[3]));
	printf("%d\n", res);
	return (0);
}
