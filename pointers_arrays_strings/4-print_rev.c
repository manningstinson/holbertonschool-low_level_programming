#include "main.h"
/**
 * print_rev - print a string
 * @s:pointer char
 * return:void
 */

void print_rev(char *s)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		continue;
	}

	j = i - 1;

	for (i = j; i >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
