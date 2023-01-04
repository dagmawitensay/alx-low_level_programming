#include "main.h"


/**
 * factorial - function that returns the fctorial of a nubmer
 * @n: number factorial to be found
 * Return: factroal of the number
 */



int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	return  (n * factorial(n - 1));
}
