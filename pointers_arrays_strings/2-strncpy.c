#include "main.h"

/**
 * _strncpy - copies a string
 * @dest:char
 * @src:char
 * @n:int
 * Return:char
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *dest_start  = dest;
	int a = 0;


	while (a < n)
	{
		if (*src != '\0')
		{

		*dest = *src;
		src++;
		}
	else
	{
		*dest = '\0';
	}

		dest++;
		a++;
	}
	return (dest_start);
}
