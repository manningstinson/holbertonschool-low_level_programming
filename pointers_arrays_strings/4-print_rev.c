#include "main.h"
/**
 * print_rev - print a string
 * @s:pointer char
 * return:void
 */

void print_rev(char *s)
{
	int length = 0;
	int i;
		while (s[length] != '\0')
		{
			length++;
		}
	for (i = length - 1; 1 >= 0; i--)
	{
		_putchar(s[i]);

	}
	_putchar('\n');
}
