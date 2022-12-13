#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * in lowercase 10 times
 * Return: void
 */

void print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		char c = 97;

		while (c < 123)
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}
