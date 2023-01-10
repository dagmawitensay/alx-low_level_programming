#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates and intializes
 * array with specific character
 * @size: size of the array
 * @c: char to initalize the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *t;
	unsigned int i;

	if (size <= 0)
		return (NULL);
	t = malloc(size * sizeof(char));

	if (t == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		t[i] = c;
	}
	return (t);
}
