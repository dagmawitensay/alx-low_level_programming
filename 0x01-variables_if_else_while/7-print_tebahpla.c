#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the alphabets
 * in reverse order
 * Return: 0
 */

int main(void)
{
	char letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}
	putchar('\n');
	return (0);
}
