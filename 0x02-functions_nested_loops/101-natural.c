#include <stdio.h>
#include "main.h"

/**
 * main - prints the sum of all multiples
 * of 3 and 5 below 1023
 * Return: 0 sucess
 */

int main(void)
{
	int i = 0;
	int total = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			total += i;
		}
	}
	printf("%d", total);
	return (0);
}
