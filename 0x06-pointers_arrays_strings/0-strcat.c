#include "main.h"
#include <string.h>

/**
 * *_strcat - function that concatenates given two
 * strigs
 * @dest: first string
 * @src: string to be concateatd
 * Return: char
 */

char *_strcat(char *dest, char *src)
{
	int dest_len = strlen(dest);
	int n = strlen(src);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
