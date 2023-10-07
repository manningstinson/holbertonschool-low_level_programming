#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */

char *leet(char *s)
{
	int i, j;
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";

	for (i = 0; s[i]; i++)
	{
		int found = 0;
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				found = 1;
				break;
			}
		}
		
		if (!found)
			_putchar(s[i]);
	}
	return (s);
}
