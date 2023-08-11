#include <stdio.h>

/**
   * main - print hexadecimal numbers
   *
   * Return: zero
   */

int main(void)
{
	int i;
	char a;

	i = '0';
	a = 'a';
	while (i <= '9')
	{
		putchar(i);
		i++;
	}
	while (a <= 'f')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
