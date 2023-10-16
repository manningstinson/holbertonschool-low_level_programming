#include "main.h"

/**
 * _strcat - concat 2 string
 * @dest:char
 * @src:char
 * Return:char
 */

char *_strcat(char *dest, char *src)
{

	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}

	while (*src != '\0')

	{
		*dest_end = *src;
		dest_end++;
		src++;
	}

	*dest_end = '\0';

return (dest);
}

