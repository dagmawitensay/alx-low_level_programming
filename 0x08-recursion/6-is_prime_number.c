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
	if ((!(n %2) && n != 2) || n < 2)
		return (0);
	return (divisors(3, n));
}


/**
 * divisors - helper function
 * @n: possible factor
 * @m: number to be checked
 * Return: 0 or 1
 */

int divisors(int n, int m)
{
	if (m % n == 0)
		return (0);
	else if (m / 2 > n)
		return (divisors(n + 2, m));
	return (1);
}
