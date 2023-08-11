#include <stdio.h>

/**
   * main - print alphabet
   *
   *Return: zero
   */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
