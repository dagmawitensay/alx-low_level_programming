#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints number combinations
 * Return: 0 sucess
 */

int main(void)
{
	int i, j;

	for (i = '0' ; i <= '9' ; i++)
	{
		for (j = '0' ; j <= '9' ; j++)
		{
			if (i < j && i != '9')
			{
				putchar(i);
				putchar(j);
				if (i < '9' | i < '8')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
i	return (0);
}
