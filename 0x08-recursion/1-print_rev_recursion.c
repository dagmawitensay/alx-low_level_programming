#include "main.h"
#include <string.h>


void _rev_helper(char *s, int i)
{
	if (i >= 0 && *(s + i) != '\n')
	{
		_putchar(*(s + i));
		_rev_helper(s, i - 1);
	}else
	{
		return;
	}

}

/**
 * _print_rev_recursion - function that prints a string in reverse
 * @s: string to be printed
 */

void _print_rev_recursion(char *s)
{
	int n = strlen(s);

	_rev_helper(s, n);
}
