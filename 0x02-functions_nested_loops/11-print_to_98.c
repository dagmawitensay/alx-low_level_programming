#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_to_98 - prins natural numbers starting from the
 * given number to 98
 * @n: the given number
 * Return: void no return
 */


void print_to_98(int n)
{
	if (n > 98)
	{
		while (n > 98)
		{
			printf(n);
			putchar(',');
			putchar(' ');
			n--;
		}
	} else
	{
		while (n < 98)
		{
			printf(n);
			putchar(',');
			putchar(' ');
			n++;
		}
	}
	printf(98);
}
