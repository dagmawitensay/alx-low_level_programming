#include "main.h"
#include <string.h>

/**
 * *_strncat - a function that concatenats two strings that will
 * use at most n byte from src and src need not be null terminated
 * @dest: string to be concatenated to
 * @src: string to  be concatenated
 * @n: no of bytes of src to be concatenated with dest
 * Return: char
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len] = '\0';
	return (dest);
}
