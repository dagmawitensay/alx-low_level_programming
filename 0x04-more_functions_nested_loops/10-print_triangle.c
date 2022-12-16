#include "main.h"

/**
 * print_triangle - prints triangle using #
 * @n: size of the triangle
 * Return: void
 */


void print_triangle(int n)
{
	int i, j, k;

	if (n > 0)
	{
		for (i = 1; i < n + 1; i++)
		{
			for (j = n;  j > i; j--)
			{
				_putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
