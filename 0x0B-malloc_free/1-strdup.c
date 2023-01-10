#include "main.h"
#include <stdlib.h>
#include <string.h>


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
 * _strdup - function that copies the the content of given
 * array into new array
 * @str: array to be copied
 * Return: pointer to the new array
 */

char *_strdup(char *str)
{
	unsigned int i;
	char *s;

	if (str == NULL)
		return (NULL);

	s = (char *) malloc(_strlen(str) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0;  str[i] != '\0'; i++)
	{
		s[i] = str[i];
	}

	return (s);
}
