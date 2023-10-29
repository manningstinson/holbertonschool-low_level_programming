#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Print values based on a format string
 * @format: A format string specifying the types of arguments
 * @...: The variadic arguments
 *
 * Return: 0 for SUCCESS
 */
int print_all(const char * const format, ...) 
{
    va_list args;
    char *separator = "";
    const char *current_format = format;
    int n;
    float f;
    char c;
    char *s;

    va_start(args, format);

    separator = "";
    current_format = format;

    while (*current_format) {
        if (*current_format == 'c') {
            c = va_arg(args, int);
            putchar(c);
        }
        if (*current_format == 's') {
            s = va_arg(args, char *);
            if (s == NULL)
                printf("%s(nil)", separator);
            else
                printf("%s%s", separator, s);
        }
        if (*current_format == 'i') {
            n = va_arg(args, int);
            printf("%s%d", separator, n);
        }
        if (*current_format == 'f') {
            f = (float)va_arg(args, double);
            printf("%s%f", separator, f);
        }

        separator = ", ";
        current_format++;
    }

    va_end(args);
    putchar('\n');

    return 0;
}
