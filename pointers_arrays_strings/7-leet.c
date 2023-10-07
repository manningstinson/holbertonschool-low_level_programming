#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */

char *leet(char *s)
{
    int i, j = 0;
    char leet_array[128] = {0};
    char a[] = "aAeEoOtTlL";
    char b[] = "4433007711";

    for (; a[j]; j++) {
        leet_array[(int)a[j]] = b[j];
    }

    for (; s[i]; i++) {
        char replacement = leet_array[(int)s[i]];
        char original = s[i];

        if (replacement != '\0') {
            _putchar(replacement);
        } else {
            _putchar(original);
        }
    }

    return s;
}
