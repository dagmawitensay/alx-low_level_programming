#include "main.h"
#include <string.h>

/**
 * *_strcpy - copies the string pointed by src to dest and
 * returns the pointer to dest
 * @dest:variable to store the copy
 * @src: variable holding string to be copied
 * Return:: char'
 */


char *_strcpy(char *dest, char *src)
{
	int len = strlen(src) + 1;
	int i;

	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
