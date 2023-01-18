#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index - function that uses a given compare function
 * to compare values inside a given array
 * @array: array to be checked
 * @size: size of the array
 * @cmp: compare function
 * Return: index of the first matching charcter
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
