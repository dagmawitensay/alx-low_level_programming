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
		int prod;

		for (i = 0; i <= n; i++)
		{
			int j = 0;

			for (j = 0; j <= n; j++)
			{
				prod = j * i;
				if (prod == 0)
				{
					_putchar(48);
					_putchar(',');
					_putchar(' ');
				}
				if  (prod < 10)
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
			_putchar('\n');
		}
	}
}
