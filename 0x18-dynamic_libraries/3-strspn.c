#include "main.h"

/**
 * _strspn - function that returns the length of a prefix substring
 * @s: the string to be checked
 * @accept:the substring
 * Return: the lenght of the prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;
	unsigned int length = 0;

	while (*(accept + i) != '\0')
	{
		j = 0;

		while (*(s + j) != ',')
		{
			if (*(accept + i) == *(s + j))
			{
				length += 1;
			}
			j++;
		}
		i++;
	}
	return (length);
}
