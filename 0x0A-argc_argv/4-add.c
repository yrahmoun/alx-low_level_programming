#include <stdio.h>
#include <stdlib.h>

/**
 * main - calculate sum of arguments
 * @ac: argument number
 * @av: arguments
 * Return: 0 or 1
 */

int main(int ac, char **av)
{
	int res = 0;
	int i = 1;
	int j;

	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			if (av[i][j] < '0' || av[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
			j++;
		}
		res += atoi(av[i]);
		i++;
	}
	printf("%d\n", res);
	return (0);
}
