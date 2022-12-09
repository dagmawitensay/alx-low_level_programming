#include <stdio.h>

/**
 * main - a function that prints
 * letter in the alphavet except q and e
 * Return: 0
 */

int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'q' and letter != 'e')
		{
			putchar(letter);
		}
		letter++;
	}
	putchar('\n');
}
