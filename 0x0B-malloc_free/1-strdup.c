#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - function that copies the the content of given
 * array into new array
 * @str: array to be copied
 * Return: pointer to the new array
 */

char *_strdup(char *str)
{
	unsigned int len = strlen(str);
	unsigned int i;
	char *s;
	
	if (str == NULL)
		return (NULL);
	s = malloc(len * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0;  i < len; i++)
	{
		s[i] = str[i];
	}
	s[i] = str[i];
	return (s);
}
