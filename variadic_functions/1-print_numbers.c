
#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Print variable number of int
 * @separator: The string to be printed
 * @n: Number of int to print
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	if (separator == NULL)
	{
		separator = "";
	}

	for (i = 0; i < n; i++)
	{
		printf("%d%s", va_arg(args, int), (i < n - 1) ? separator : "");	}
	printf("\n");
	va_end(args);
}
