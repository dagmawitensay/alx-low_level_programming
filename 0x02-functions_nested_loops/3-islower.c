#include "main.h"

/**
 * _islower - check if a letter is
 * in lower case or not
 * @c: character to be checked
 * Return: 1 if lower case
 * and 0 otherwise
 */

int _islower(int c)
{
	if ((c >= 97) && (c < 123))
	{
		return (1);
	}
	return (0);
}
