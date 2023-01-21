#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints the given strings
 * @separator: character printed between the strings
 * @n: number of strings to print
 */


void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;
	char *string;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(ap, char *);
		printf("%s", (string != NULL) ? string : "(nil)");
		if (separator != NULL && i + 1 != n)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
