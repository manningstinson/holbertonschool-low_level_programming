#include "main.h"

/**
 * _memset  - fills memory with constant byte
 * @s:char
 * @b:char
 * @n:unsigned int
 * Return:char
 */


char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
return (s);
}

