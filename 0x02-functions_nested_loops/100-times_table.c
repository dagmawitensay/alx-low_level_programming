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
		int i = 1;

		for (i = 1; i <= n; i++)
		{
			int j = 1;

			_putchar(48);
			_putchar(' ');
			for (j = 1; j <= n; j++)
			{
				prod = j * i;

				else if  (prod < 10)
				{
					_putchar(' ');
					_putchar(prod + 48);
				} else if (prod > 10 && prod < 100)
				{
					_putchar(prod / 10 + 48);
					_putchar(prod % 10 + 48);
				} else
				{
					_putchar(prod / 100);
					_putchar((prod / 10) % 10);
					_putchar(prod % 10);
				}
				if (i != n && j != n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
