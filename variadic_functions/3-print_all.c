#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

void p_char(va_list list) {
    char c;
    c = va_arg(list, int);
    printf("%c", c);
}

void p_string(va_list list) {
    char *str;
    str = va_arg(list, char*);
    printf("%s", (str != NULL) ? str : "(nil)");
}

void p_integer(va_list list) {
    int i;
    i = va_arg(list, int);
    printf("%d", i);
}

void p_float(va_list list) {
    double f;
    f = va_arg(list, double);
    printf("%f", f);
}


void print_all(const char * const format, ...)
{
    int printed = 0;
    char *s = "";
    void (*print_functions[])(va_list) = {p_float, p_char, p_string, p_integer};
    va_list valist;
    char *format_copy = (char *)format;

    va_start(valist, format);

    while (*format_copy && printed < 4) {
        char c = *format_copy;
        if (c >= 'c' && c <= 'f') {
            printf("%s", s);
            print_functions[c - 'c'](valist);
            s = ", ";
            printed++;
        }
        format_copy++;
    }

    va_end(valist);
    printf("\n");
}
