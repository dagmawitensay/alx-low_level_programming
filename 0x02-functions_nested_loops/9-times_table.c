#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */


void times_table(void)
{
	int i = 0;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		int j = 0;

		_putchar(48);
		_putchar(',');
		_putchar(' ');
		for (j = 1; j <= 9; j++)
		{
			prod = j * i;

			if (prod < 10)
			{
				_putchar(' ');
				_putchar(prod + 48);
			} else
				_putchar(prod / 10 + 48);
				_putchar(prod % 10 + 48);
			}
			if (j != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
