#include <stdio.h>

/**
 * main - print alphabet except q and e
 *
 * Return: zero
 */

int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		if (a != 'e' && a != 'q')
			putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
