#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a given string
 * @s: string to be reversed
 * Return: noting
 */


void rev_string(char *s)
{
	int i = 0;
	int j = 0;
	char t[100];

	while (s[i] != '\0')
	{
		i++;
	}
	for (; i > 0; i--)
	{
		t[j] = s[i];
		j++;
	}
	while (i < j)
	{
		s[i] = t[i];
		i++;
	}
}
