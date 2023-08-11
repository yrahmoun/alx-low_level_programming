#include <stdio.h>

/**
   * main - prints alphabet in reverse
   *
   * Return: zero
   */

int main(void)
{
	char a = 'z';

	while (a >= 'a')
	{
		putchar(a);
		a--;
	}
	putchar('\n');
	return (0);
}
