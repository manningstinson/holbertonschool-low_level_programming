#include "main.h"

/**
 * _strcpy - copies  src to  dest.
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcpy(char *dest, char *src)
{
	char *original_dest = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (original_dest);
}
