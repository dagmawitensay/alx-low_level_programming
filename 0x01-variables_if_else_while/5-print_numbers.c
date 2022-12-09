#include <stdio.h>

/**
 * main - funcion that prints
 * digits from one to nine
 * Return: 0
 */

int main(void)
{
	short int i = 0;

	while (i < 10)
	{
		put(i);
		i++;
	}
	put('\n');
	return (0);
}
