#include "main.h"

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
		if (c < 10)
		{
			_putchar(c + 48);
		} else
		{
			_putchar(c / 10 + 48);
			_putchar(c % 10 + 48);
		}
		if (j != 49)
		{
			_putchar(',');
			_putchar(' ');
		}

	}
	_putchar('\n');
	return (0);
}

