#include "main.h"


/**
 * _memcpy - copies memory area
 * @dest:char
 * @src:char
 * @n:int
 * Return:char pointer
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr = dest;
	char *src_ptr = src;

	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
	return (dest);
}
