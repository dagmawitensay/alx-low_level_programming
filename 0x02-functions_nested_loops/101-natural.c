#include <stdio.h>
#include "main.h"

/**
 * multiples_sum - prints the sum of all multiples
 * of 3 and 5 below 1023
 * Return: void no return
 */

void multiples_sum(void)
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
}
