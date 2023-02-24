#include "main.h"

/**
 * get_bit - function to get the bit at a given
 * index
 * @n: the decimal number
 * @index: the given index
 * Return: the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index > sizeof(unsigned int) * 8)
		return (-1);

	n = n >> index;
	n = n & 1;
	return (n);
}
