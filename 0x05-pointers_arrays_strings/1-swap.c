#include "main.h"

/**
 * swap_int - takes two pointes and swaps
 * thier values
 * @a: pointer to the first number
 * @b: pointer to the second number
 * Return: noting
 */

void swap_int(int *a, int *b)
{
	int *t;

	t = *a;
	*a  = *b;
	*b = t;
}
