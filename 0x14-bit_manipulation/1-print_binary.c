#include "main.h"

/**
 * print_binary - fuction that converts a given decimal to
 * binary
 * @n: decimal number to be convertd
 * Return: noting
 */

void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}
