#include "main.h"

/**
 * puts2 - print  every other character of a string
 * @str:pointer char
 * return:void
 */

void puts2(char *str) {
    int i = 0;

    while (1) {
        if (str[i] == '\0') 
		break;
        _putchar(str[i]);
        i += 2; 
    }

    _putchar('\n');
}

