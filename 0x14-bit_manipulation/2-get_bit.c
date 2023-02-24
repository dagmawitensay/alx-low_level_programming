#include "main.h"

/**
 * get_bit -  function to get the bit at a given
 * index
 * @n: the decimal number
 * @index: the given index
 * Return the bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int binaryNum[32];
	int i;

	for (i = 0; n > 0 ; i++)
	{
		binaryNum[i] = n % 2;
		n /= 2;
	}
	return (binaryNum[index]);
}
