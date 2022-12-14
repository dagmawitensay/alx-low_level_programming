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
		int i = 0;

		for (i = 0; i <= n; i++)
		{
			int j = 1;
			int prod;

			_putchar(48);
			_putchar(',');
			_putchar(' ');
			for (j = 1; j <= n; j++)
			{
				prod = j * i;

				if  (prod < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + 48);
				} else if (prod >= 10 && prod < 100)
				{
					_putchar(' ');
					_putchar(prod / 10 + 48);
					_putchar(prod % 10 + 48);
				} else
				{
					_putchar(prod / 100 + 48);
					_putchar((prod / 10) % 10 + 48);
					_putchar(prod % 10 + 48);
				}
				if (j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
