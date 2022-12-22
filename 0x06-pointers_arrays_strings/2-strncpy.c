#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: string to be copied upon
 * @src: string to be copied
 * @n: no of the string to be copied
 * Return: char
 */


char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
}
