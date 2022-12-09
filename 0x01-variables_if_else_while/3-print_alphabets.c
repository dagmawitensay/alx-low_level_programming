#include <stdio.h>

/**
 * main - a function that prints
 * the alphabet in uppercase and in
 * lowercase
 * Return: 0 always returns zero
 */

int main(void)
{
	char c = 'a';
	char d = 'A';
	short int i = 0;
	short int j = 0;

	for (i = 0 ; i < 26; i++)
	{
		putchar(c);
		c += 1;
	}

	for (j = 0 ; j < 26; i++)
	{
		putchar(d);
		d += 1;
	}
	putchar('\n');
	return (0);
}
