#include "main.h"
#include <string.h>

/**
 * *string_toupper - a function that changes all
 * the lowercase letter into oupper case
 * @s: string to be converted
 * Return: converted string
 */


char *string_toupper(char *s)
{
	int i;
	int n = strlen(s);

	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		if (s[i] >= 97 && s[i] < 123)
		{
			s[i] -= 32;
		}
	}
	return (s);
}
