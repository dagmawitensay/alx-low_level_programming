#include "main.h"
#include <string.h>

/**
 * puts2 - prints every other value
 * @str: the string to be printed
 * Return:noting
 */

void puts2(char *str)
{
	int len = strlen(str);
	int i;

	for (i = 0; i < len; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
