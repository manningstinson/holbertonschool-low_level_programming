#include "main.h"

/**
 * _strstr - locate a substring
 * @haystack:string
 * @needle:string
 * Return:string
 */

char *_strstr(char *haystack, char *needle)
{
	char *haystack_ptr;
	char *needle_ptr;

	while (*haystack)
	{
		haystack_ptr = haystack;
		needle_ptr = needle;

		while (*needle_ptr && *haystack_ptr == *needle_ptr)
		{
			haystack_ptr++;
			needle_ptr++;
		}
		if (*needle_ptr == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ((char *)0);
}
