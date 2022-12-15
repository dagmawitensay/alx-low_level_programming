#include "main.h"

/**
 * _isdigit - testes weather a given character is a digit or not
 * @c: character to be checked
 * Return: 1 if digit
 * 0 if not digit
 */


int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
