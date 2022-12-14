#include <stdio.h>

/**
 * mian -prints sum of even numbers
 * in fibonacci
 * Return: 0
 */

int main(void)
{
	unsigned int long a, b, c, res;

	a = 0;
	b = 1;
	res = 0;
	c = a + b;

	while (c < 4000000)
	{
		c = a + b;
		a = b;
		b = c;

		if (c % 2 == 0)
		{
			res += c;
		}
	}
	printf("%lu", res);
	return (0);
}

