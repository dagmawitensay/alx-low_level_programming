#include "main.h"


/**
 * reverse_array - function that reversesa given array
 * @a: array to be reversed
 * @n: the number of elements to swap
 * Return: noting
 */

void reverse_array(int *a, int n)
{
	int i;
	int t;
	int end = n / 2;


	for (i = 0; i < end; i++)
	{
		t = a[i];
		a[i] = a[n - i - 1];
		a[n -i -1] = t;
	}
}
