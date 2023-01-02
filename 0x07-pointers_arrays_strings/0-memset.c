#include "main.h"

/**
 * _memeset - a function that fills the first n
 * bytes of a memory with byte b
 * @s: pointer to the addrss of the array to be filled
 * @b: byte which fills the first n bytes of the memory
 * @n: the number of bytes to be filled
 * Return: a pointer to memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for(i =0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
