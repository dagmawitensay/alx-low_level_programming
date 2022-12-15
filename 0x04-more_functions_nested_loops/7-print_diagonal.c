#include "main.h"

/**
 * print_diagonal - prints slash diagonally
 * @n: number of diagonals
 * Return: 0
 */

void print_diagonal(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		_putchar(92);
		for (i = 1; i < n; i++)
		{
			_putchar(' ');
			_putchar(92);
		}
		_putchar('\n');
	}
}
