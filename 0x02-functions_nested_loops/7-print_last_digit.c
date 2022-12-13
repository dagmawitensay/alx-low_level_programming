#include "main.h"

/**
 * print_last_digit - prints the last digit
 * of a number
 * @n: the given number
 * Return: the last digit of the given number
 */

int print_last_digit(int n)
{
	n = n % 10;
	if (n < 0)
		n = -n;
	_putchar(n + '0');
	return (n);
}
