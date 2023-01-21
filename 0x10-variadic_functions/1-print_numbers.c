#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that prints padded numbers separating
 * them with passed separator
 * @separator: character to printed betwen the numbers
 * @n: length of the numbers to be printed
 */



void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
}
