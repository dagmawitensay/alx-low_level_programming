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

	_putchar(a + 48);
	_putchar(',');
	_putchar(' ');
	_putchar(b + 48);
	_putchar(',');
	_putchar(' ');
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

