#include "main.h"

/**
 * get_endianness - functio to check for the indianess of the architecture
 * Return: 0 if big endian or 1 if little endian
 */

int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	return ((int)*c);
}
