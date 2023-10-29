#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *
 *
 * comments go here
 *
 */

#include <stdarg.h>
#include <stdio.h>

#include <stdarg.h>
#include <stdio.h>

void print_all(const char * const format, ...) {
    va_list args;
    char *separator = "";
    char *current_format;
    int first;
    char c;
    int i;
    float f;
    char *s;

    va_start(args, format);
    current_format = (char *)format;
    first = 1;

    while (current_format && *current_format) {
        if (!first)
            printf("%s", separator);

        if (*current_format == 'c') {
            c = va_arg(args, int);
            printf("%c", c);
        } else if (*current_format == 'i') {
            i = va_arg(args, int);
            printf("%d", i);
        } else if (*current_format == 'f') {
            f = (float)va_arg(args, double);
            printf("%f", f);
        } else if (*current_format == 's') {
            s = va_arg(args, char *);
            if (s == NULL)
                printf("(nil)");
            else
                printf("%s", s);
        }

        first = 0;
        separator = ", ";
        current_format++;
    }

    printf("\n");

    va_end(args);
}

