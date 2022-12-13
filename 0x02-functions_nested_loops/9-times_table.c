#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */


void times_table(void)
{
	int i = 0;
	int prod = 0;

	for (i = 0; i <= 9; i++)
	{
		int j = 0;

		for (j = 0; j <= 9; j++)
		{
			prod = j * i;
			if (prod <= 9)
			{
				_putchar(prod + 48);
				if (i != 9 && j != 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			} else
			{
				_putchar(prod / 10 + 48);
				_putchar(prod % 10 + 48);
				if (i != 9 && j != 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}

