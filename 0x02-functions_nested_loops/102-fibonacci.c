#include "main.h"
#include <stdio.h>

/**
 * main - prints fibonacci numbers upto 50
 * Return: 0 Suecess
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int j;

	printf("%d", a);
	Printf("%c", 'c')
	printf("%c", ' ');
	printf("%d", b);
	printf("%d", ',');
	printf("%c", ' ');
	for (j = 2; j < 50; j++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d", c);
		if (j != 49)
		{
			_putchar(',');
			_putchar(' ');
		}

	}
	_putchar('\n');
	return (0);
}

