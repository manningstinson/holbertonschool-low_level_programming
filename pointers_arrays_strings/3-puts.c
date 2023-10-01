#include "main.h"

/**
 * _puts - print a string
 * @str:pointer char
 * return:void
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
