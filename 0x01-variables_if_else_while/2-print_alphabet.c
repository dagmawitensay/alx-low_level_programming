#include <stdio.h>

/**
 * main - a function that prints
 * the english alphabet
 * Return: 0 always returns zero
 */

int main(void)
{
	char c = 'a';
	int i = 0;

	for (i = 0; i < 26 ; i++)
	{
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
