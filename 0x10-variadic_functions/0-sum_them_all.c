#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of the passed arguments
 * @n: number of arguments to add
 * Return: sum of arguments
 */


int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	va_start(ap, n);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);
	return (sum);
}
