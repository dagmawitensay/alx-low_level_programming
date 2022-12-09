#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a function that cheks
 * if the last digit a given number
 * if less than 6 or not
 * Return: 0 alawys returns zero
 */

int main(void)
{
	int n;
	short int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		last_digit = (n % 10) - 10;
	}
	else
	{
		last_digit = (n % 10);
	}
	if (last_digit > 5)
	{
		printf("Last digit of %d is %d
				and is greater than 5", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %d is %d
				and is 0", n, last_digit);
	}
	else
	{
		printf("Last digit of %d is %d and
				is less than 6 and not 0", n, last_digit);
	}
	return (0);

}


