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
		return (98);
	}
	op = get_op_func(av[2]);
	if (op == 0)
	{
		printf("Error\n");
		return (99);
	}
	res = op(atoi(av[1]), atoi(av[3]));
	printf("%d\n", res);
	return (0);
}
