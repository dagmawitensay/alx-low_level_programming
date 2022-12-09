#include <stdio.h>

/**
 * main - a function that prints
 * the english alphabet
 * Return: 0 always returns zero
 */

int main(void)
{
	char c = 'a';

	while (c != 'z')
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
