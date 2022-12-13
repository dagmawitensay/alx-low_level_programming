#include "main.h"

/**
 * times_table - prints the 9 times table
 * Return: void
 */


void times_table(void)
{
	int i = 0;
	int res = 0;

	for (i = 0; i < 10; i++)
	{
		int j = 0;

		for (j = 0; j < 10; j++)
		{
			res = i *j ;
			_putchar(res);
			_putchar(' ');
			_putchar(',');
		}
		_putchar('\n');
	}
}
