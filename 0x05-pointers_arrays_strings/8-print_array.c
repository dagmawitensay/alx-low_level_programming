#include "main.h"

/**
 * print_array - prints n elements of the array
 * @n: number of elements to be printed
 * @a: the given array
 * Return:noitng
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar(a[i]);
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
