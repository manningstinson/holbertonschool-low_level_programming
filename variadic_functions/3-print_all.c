#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>


/**
 * p_char - Print a character
 * @list: Argument list
 */

void p_char(va_list list)
{
	char c = va_arg(list, int);

	printf("%c", c);
}

/**
 * p_string - Print a string
 * @list: Argument list
 */

void p_string(va_list list)
{
	char *str = va_arg(list, char*);

	printf("%s", (str != NULL) ? str : "(nil)");
}

/**
 * p_integer - Print an integer
 * @list: Argument list
 */

void p_integer(va_list list)
{
	int i = va_arg(list, int);

	printf("%d", i);
}

/**
 * p_float - Print a float
 * @list: Argument list
 */

void p_float(va_list list)
{
	double f = va_arg(list, double);

	printf("%f", f);
}

/**
 * print_all - Print various data types based on format string
 * @format: Format string
 */

void print_all(const char * const format, ...)
{
	va_list valist;
	int printed = 0;
	char *s = "";
	const char *format_ptr = format;

	va_start(valist, format);
	if (format == NULL)
	{
		printf("\n");
		return;
	}
	while (*format_ptr)
	{
		switch (*format_ptr)
		{
			case 'c':
				printf("%s", s);
				p_char(valist);
				s = ", ";
				printed++;
				break;
			case 's':
				printf("%s", s);
				p_string(valist);
				s = ", ";
				printed++;
				break;
			case 'i':
				printf("%s", s);
				p_integer(valist);
				s = ", ";
				printed++;
				break;
			case 'f':
				printf("%s", s);
				p_float(valist);
				s = ", ";
				printed++;
				break;
			default:
				break;
		}
		format_ptr++;
		if (printed >= 4)
		{
			break;
		}
	}
	va_end(valist);
	printf("\n");
}
