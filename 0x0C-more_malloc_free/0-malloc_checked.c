#include "main.h"
#include "stdlib.h"

/**
 * malloc_checked - function that allocates memory space using malloc
 * @b: size of the memory space
 * Return:noting
 */

void *malloc_checked(unsigned int b)
{

	void *s = malloc(b);

	if (s == NULL)
		exit(98);
	return (s);
}
