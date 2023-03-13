#include "main.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of the string
 * @s: input string to count
 * Description: returns the length of a given string
 * Return: length of string as int
 **/
int _strlen(char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i + 1);
}

/**
 * str_concat - function that concatenates given two strings
 * @s1: given string
 * @s2: given string
 * Return: pointer to the new concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i, j;
	char *dest;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	dest = malloc((_strlen(s1) + _strlen(s2)) * sizeof(char));

	if (dest == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
	{
		dest[i] = s1[i];
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		dest[i + j] = s2[j];
	}

	return (dest);
}
