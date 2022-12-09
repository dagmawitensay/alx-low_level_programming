#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints digits in asending
 * order
 * Return: 0
 */

int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);
		putchar(',');
		putchar(20);
		num++;
	}
	putchar('\n');
	return (0);
}
