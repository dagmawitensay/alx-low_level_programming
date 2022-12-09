#include <stdio.h>
#include <stdlib.h>

/**
 * main - funcion that prints
 * digits from one to nine
 * Return: 0
 */

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		printf("%d", i);
		i++;
	}
	printf('\n');
	return (0);
}
