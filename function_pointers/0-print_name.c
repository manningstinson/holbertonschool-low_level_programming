#include "main.h"
#include <stddef.h>

int _putchar(char c);

/**
 * print_name - Print a name using a callback function
 * @name: Name to be printed
 * @f: Pointer to a function that takes a char* argument
 */

void print_name(char *name, void (*f)(char *)) {
    if (name != NULL && f != NULL) {
        f(name);
    }
}

/**
 * print_name_upper - Print the name in uppercase
 * @name: Name to be printed
 */
void print_name_upper(char *name) {
    int i = 0;
    while (name[i]) {
        char c = name[i];
        if (c >= 'a' && c <= 'z') {
            c -= 32;
        }
        _putchar(c);
        i++;
    }
    _putchar('\n');
}

/**
 * print_name_lower - Print the name in lowercase
 * @name: Name to be printed
 */
void print_name_lower(char *name) {
    int i = 0;
    while (name[i]) {
        char c = name[i];
        if (c >= 'A' && c <= 'Z') {
            c += 32;
        }
        _putchar(c);
        i++;
    }
    _putchar('\n');
}
