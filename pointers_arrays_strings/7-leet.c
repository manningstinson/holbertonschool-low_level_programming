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
		j = 0;

		while (a[j])
		{
			(s[i] == a[j]) ? (_putchar(b[j]), j = 0, 0) : j++;
		}

		if (!a[j])
			_putchar(s[i]);
	}
	return (s);
}
