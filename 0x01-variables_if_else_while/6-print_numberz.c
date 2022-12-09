#include <stdio.h>
#include <stdlib.h>

/**
 * main - a function that prints digits
 * from zero to nine
 * Return: 0
 */

int main(void)
{
	unsigned int num = 48;

	while (num <= 57)
	{
		putchar(num);
		num++;
	}
	putchar('\n');
	return (0);
}
