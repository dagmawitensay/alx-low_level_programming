#include "main.h"
#include <stdio.h>

/**
 * main - prints fibonacci numbers upto 50
 * Return: 0 Suecess
 */

int main(void)
{
	unsigned int long a, b, c;
	int j;
	a = 1;
	b = 2;

	printf("%lu, %lu, ", a, b);
	for (j = 0; j <= 47; j++)
	{
		c = a + b;
		a = b;
		b = c;
		printf("%lu", c);
		if (j != 47)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

