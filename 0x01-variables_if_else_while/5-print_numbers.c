#include <stdio.h>
#include <stdlib.h>

/**
 * main - funcion that prints
 * digits from one to nine
 * Return: 0
 */

int main(void)
{
	char i = '0';

	while (i < '10')
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
