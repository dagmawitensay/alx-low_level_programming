#include "main.h"
#include <math.h>

/**
 * is_prime_number- function that chekx weather a given number is prime
 * or not
 * @n: number to be checked
 * Return: 1 if pirme and 0 if not
 */


int is_prime_number(int n)
{
	int m = sqrt(n);

	return (prime_helper(n, m));
}


int prime_helper(int p, int q)
{
	if (p == 1 || p < 0)
		return (0);
	else if (q < 2)
		return (1);
	else if (p % q == 0)
		return (0);
	return (prime_helper(p, q - 1));
}
