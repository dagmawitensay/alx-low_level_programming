#include "main.h"

/**
 * set_bit - function that set the bit at a
 * given index to 1
 * @n: pointer to the decimal to be set
 * @index: thedex of the bit to be set
 * Return: 1 if successful or -1 if not
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
