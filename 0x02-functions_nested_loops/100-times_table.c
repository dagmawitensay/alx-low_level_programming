#include "main.h"
/**
 * print_times_table - prints n by n mulipliction table
 * @n: the given number
 * Return: void not return
 */



void print_times_table(int n)
{
	if (n > 0 && n <= 15)
	{
		int prod;
		int i = 0;

		for (i = 0; i <= n; i++)
		{
			_putchar(48);
			_putchar(',');
			_putchar(' ');
			for (j = 0; j <= n; i++)
			{
				prod = j * i;
				if (prod < 10)
				{
					_putchar(' ');
					_putchar(prod + 48);
				} else
				{
					_putchar(prod / 10 + 48);
					_putchar(prod % 10 + 48);
				}
				_putchar(',');
				_putchar(' ');
			}
		}
	}
}
