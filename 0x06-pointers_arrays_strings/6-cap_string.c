#include "main.h"
#include <string.h>

/**
 * *cap_string - function that capitalizes all the words
 * in  a string
 * @s: the string to be capitalized
 * Return: the capitalized string
 */

char *cap_string(char *s)
{
	int n = strlen(s);
	int i, j;
	char symbols[] = {',', ';', '.', '!', '?', '"', '(', ')', '{', '}', ' ', '\n', '\t'};
	int s_len = sizeof(symbols) / sizeof(char);

	for (i = 0; i < n && s[i] != '\0'; i++)
	{
		if (i != 0)
		{
			int p = i - 1;
			char upper = 's';

			for (j = 0; j < s_len ; j++)
			{
				if (s[p] == symbols[j])
				{
					upper = 'c';
				}
			}
			if ((upper == 'c') && (s[i] >= 97 && s[i] < 123))
			{
				s[i] -= 32;
			}
		}
	}
	return (s);
}
