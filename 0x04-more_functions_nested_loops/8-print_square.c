#include "miain.h"

/**
 * print_square - prints square using # character
 * @size: square size
 * Return: void
 */

void print_square(int size)
{
	int i, j;

	if (n > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
	_putchar('\n');
	}
}
