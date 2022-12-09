#include <stdlib.h>
#include <time.h>

/**
 * main - a function to check if a number
 * if positive, negative or zero
 * Return: 0 always returns zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 0)
	{
		printf("is positive");
	} else if (n == 0)
	{
		printf("is zero");
	} else
	{
		printf("is negative");
	}

	return (0);

}
