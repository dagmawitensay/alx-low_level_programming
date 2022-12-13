#include "main.h"

/**
 * _isalpha - checks if c is
 * alphabetic character
 * @c: character to be chaked
 * Return:1 if alphabetic character
 * 0 if not
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
