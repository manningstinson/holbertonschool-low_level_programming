#include "function_pointers.h"

/**
 * print_name - Function to print a name using a callback function
 * @name: The name to be printed
 * @f: The function pointer to format and print the name
 */

void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
