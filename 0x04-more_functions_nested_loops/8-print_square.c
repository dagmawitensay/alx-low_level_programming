#include "main.h"


/**
 * print_square - prints square using # character
 * @size: square size
 * Return: void
 */

void print_square(int size)
{
	int x;
	int y;

	for (y = 0; y < n; y++)
	{
		for (x = 0; x < n; x++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	if (n <= 0)
	{
		_putchar('\n');
	}
}
