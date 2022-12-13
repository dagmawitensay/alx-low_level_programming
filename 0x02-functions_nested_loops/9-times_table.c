#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */


void times_table(void)
{
	int i = 48;
	int res = 0;

	for (i = 0; i < 58; i++)
	{
		int j = 48;

		for (j = 48; j < 58; j++)
		{
			res = i * j;
			_putchar(res);
			_putchar(' ');
			_putchar(',');
		}
		_putchar('\n');
	}
}
