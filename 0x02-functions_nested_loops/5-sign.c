#include "main.h"

/**
 * print_sign - checks the sign of
 * a given number
 * @n: number to be checked
 * Return: 1 if the number if greater than 0
 * 0 if the number if zero
 * -1 if the number is less thab zero
 */


int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	} else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
