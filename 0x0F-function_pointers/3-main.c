#include "3-calc.h"

/**
 * main - execute operations
 * @ac: number of arguments
 * @av: argument array
 * Return: 0
 */

int main(int ac, char **av)
{
	char op;
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
	op = av[2][0];
	if (op != '+' && op != '-' && op != '*' && op != '/'
		&& op != '%')
	{
		printf("Error\n");
		exit(99);
	}
	res = get_op_func(av[2])(atoi(av[1]), atoi(av[3]));
	printf("%d\n", res);
	return (0);
}
