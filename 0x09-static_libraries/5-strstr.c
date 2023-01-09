#include "main.h"
#include <string.h>

/**
 * _strstr - find and returns a pointer to the first character
 * of a substring
 * @haystack: string to be scanned
 * @needle: string to be matched for the substring
 * Return: a pointer to the first character of the substring
 * or null if not matched substring
 */


char *_strstr(char *haystack, char *needle)
{
	unsigned int i;
	unsigned int n = strlen(haystack);
	unsigned int j;

	for (i = 0; i < n; i++)
	{
		if (haystack[i] == needle[0])
		{
			j = 1;

			while (needle[j] != '\0')
			{
				if (haystack[i + j] != needle[j])
				{
					return (0);
				}
				j++;
			}
			return (&haystack[i]);
		}
	}
	return (0);
}
