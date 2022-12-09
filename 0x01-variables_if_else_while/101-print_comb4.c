#include <stdio.h>
#include <stdlib.h>

/**
 * main - outputs the possible
 * combination of three digits
 * Return: 0
 */

int main(void)
{
	int i, j, k;

	for (i = '0'; i < '9'; i++)
	{
		for (j = '0'; j < '9'; j++)
		{
			for (k = '0'; k < '9'; k++)
			{
				if ((i < j) && (j < k) && (i != '8') && (j != '9'))
				{
					putchar(i);
					putchar(j);
					putchar(k);

					if (i < '7')
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
