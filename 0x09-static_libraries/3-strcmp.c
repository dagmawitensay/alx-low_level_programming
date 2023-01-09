#include "main.h"
#include <string.h>

/**
 * _strcmp - function that compares the given two strings
 * @s1: first string
 * @s2: second string
 * Return: the difference betweent the ascii values of
 * the first non matching character
 */


int _strcmp(char *s1, char *s2)
{
	int s1_len = strlen(s1);
	int i;
	int diff = 0;

	for (i = 0; i < s1_len  && diff == 0 && s1[i] != '\0' ; i++)
	{
		diff = s1[i] - s2[i];
	}
	return (diff);
}
