#include "main.h"

/**
 * _sqrt_recursion - main function
 * @n: number to be evaluated
 * Return : -1 if no natural square root
 * or value of squre root
 */


int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - evaluator function
 * @n :number to be evauated
 * @i: possible root
 * Return: root
 */

int _sqrt(int n, int i)
{
	if (n < 0 || i * i > n)
		return (-1);
	else if (i * i == n)
		return (i);
	return (_sqrt(n, i + 1));
}
