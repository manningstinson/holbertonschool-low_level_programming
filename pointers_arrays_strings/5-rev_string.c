#include "main.h"

void rev_string(char *s) 
{
    int length = 0;
    int start = 0;
    int end = length -1;

    while (s[length] != '\0') 
    {
        length++;
    }

    while (start < end) {
        char temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    }
}

