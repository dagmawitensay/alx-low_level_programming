#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints hexadecimal number
 * Return: 0
 */

int main(void)
{
	int num = 0;

	while (num <= 15)
	{
		if (num < 10)
		{
			putchar(num);
		}
		else
		{
			putchar(num + 51);
		}
		num++;
	}
	putchar('\n');
	return (0);
}
