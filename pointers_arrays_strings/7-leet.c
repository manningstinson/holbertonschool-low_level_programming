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
		if (s[i] == a[0] || s[i] == a[1] || s[i] == a[2] || s[i] == a[3] ||
		    s[i] == a[4] || s[i] == a[5] || s[i] == a[6])
		{
			for (j = 0; a[j]; j++)
			{
				if (s[i] == a[j])
				{
					_putchar(b[j]);
					break;
				}
			}
		}
		else
		{
			_putchar(s[i]);
		}
	}
	return (s);
}

