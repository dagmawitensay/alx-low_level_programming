#include "main.h"
#include "string.h"

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
	unsigned int j = strlen(s);
	char *f;

	for (i = 0 ; i < j; i++)
	{
		if (*(s + i) == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}
