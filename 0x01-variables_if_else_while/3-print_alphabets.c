#include <stdio.h>

/**
 * main - a function that prints
 * the alphabet in uppercase and in
 * lowercase
 * Return: 0 always returns zero
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	letter = 'A';

	while (letter <= 'Z')
	{
		putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}
