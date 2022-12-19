#include "main.h"
#include <string.h>

/**
 * rev_string - reverses a given string
 * @s: string to be reversed
 * Return: noting
 */


void rev_string(char *s)
{
	int len = strlen(s) - 1;
	int t[len];
	int i = 0;

	while (len >= 0)
	{
		t[i] = s[len];
		i++;
		len--;
	}
	*s = *t;
}
