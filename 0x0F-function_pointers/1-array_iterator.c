#include "function_pointers.h"
#include <stdlib.h>

/**
 * array_iterator - function that calls a given function on
 * each element of a given array
 * @array: array to be used
 * @size: size of the array
 * @action: pointer to the function to be executed
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
