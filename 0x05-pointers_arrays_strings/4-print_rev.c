#include "main.h"
#include <string.h>


/**
 * print_rev - print the string in reverse
 * @s: string to be printed
 * Return: noting
 */

void print_rev(char *s)
{
	int i = strlen(s) - 1;

	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
