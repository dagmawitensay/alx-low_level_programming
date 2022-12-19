#include "main.h"

/**
 *_strlen- returns the lenght of a given stirng
 * @s: string which its length will be evaluated
 * Return: the length of the string
 */

int _strlen(char *s)
{
	int i = 0;
	int ctr = 0;

	while (s[i] != '\0')
	{
		ctr++;
		i++;
	}
}
