#include "main.h"
/**
 * _strpbrk - returns a pointer to the first matching
 * character is s with any of the characters in accept
 * @s: string to be scanned
 * @accept :string cotaining the charactes to match
 * Return:a pointer to the first matching characte
 */


char *_strpbrk(char *s, char *accept)
{
	unsigned int i = 0;
	unsigned int j;

	while (*(s + i) != '\0')
	{
		j = 0;

		while (*(accept + j) != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		s++;
	}
	return (0);
}
