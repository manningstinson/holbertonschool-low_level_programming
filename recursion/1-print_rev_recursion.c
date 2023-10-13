#include "main.h"

/**
 * _strlen_recursion - length of string
 * @s:string
 * Return:int
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
