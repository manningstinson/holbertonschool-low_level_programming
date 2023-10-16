#include "main.h"

/**
 * _strchr - locate a character in a string
 * @s:string
 * @c:char
 * Return:pointer to char*
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}
	return ((char *)0);
}
