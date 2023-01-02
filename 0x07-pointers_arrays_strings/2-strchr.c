#include "main.h"

/**
 *_strchr - function that returns a pointer to the first
 * occurence of a character
 * @s: the string to be checked
 * @c: character to be searched
 *Return: a pointer to the first occurence of the character
 */

char *_strchr(char *s, char c)
{
	unsigned int i;

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	return (0);
}
