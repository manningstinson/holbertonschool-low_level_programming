#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */

char *leet(char *s)
{
    int i = 0;
    int j = 0;
    char leet_array[128] = {0};
    char a[] = "aAeEoOtTlL";
    char b[] = "4433007711";

    for (; a[j]; j++) {
        leet_array[(int)a[j]] = b[j];
    }

    while (s[i]) {
        _putchar(leet_array[(int)s[i]] ? leet_array[(int)s[i]] : s[i]);
        i++;
    }

    return (s);
}
