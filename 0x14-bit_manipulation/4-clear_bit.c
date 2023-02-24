#include "main.h"

/**
 * clear_bit - function that sets the bit at a given
 * index to 0
 * @n: pointer to the decimal number
 * @index: index of the bit to be set to 0
 * Return: 1 if sucess or -1 if not
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	i = *n ^ 1 << index;
	*n = *n & i;
	return (0);
}
