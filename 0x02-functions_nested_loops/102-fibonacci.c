#include "main.h"
#include <stdio.h>

/**
 * main - prints fibonacci numbers upto 50
 * Return: 0 Suecess
 */

int main(void)
{
	int a = 1;
	int b = 2;
	int c;
	int j;

	printf("%d, %d, ", a, b);
	for (j = 0; j <= 48; j++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%d, ", c);
	}
	printf("\n");
}
