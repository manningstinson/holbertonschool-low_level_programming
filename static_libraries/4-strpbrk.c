#include "main.h"

/**
 * _strpbrk -  searches a string for any of a set of bytes
 * @s:string
 * @accept:string
 * Return:char
 */

char *_strpbrk(char *s, char *accept)
{
	while (*s)
	{
		char *accept_ptr = accept;

		while (*accept_ptr)
		{
			if (*s == *accept_ptr)
			{
				return (s);
			}
			accept_ptr++;
		}
		s++;
	}
	return ((char *)0);
}
