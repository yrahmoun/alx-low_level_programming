#include <stdio.h>

/**
   * main - print numbers
   *
   * Return: zero
   */

int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
