#include "main.h"
#include <string.h>
/**
 * puts_half - only prints the second half of
 * a given string
 * @str: string to be printed
 * Return:noting
 */


void puts_half(char *str)
{
	int len = strlen(str);
	int i, j;

	if (len % 2 == 0)
	{
		j = len / 2;
	} else
	{
		j = (len - 1) / 2 + 1;
	}

	for (i = j; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
