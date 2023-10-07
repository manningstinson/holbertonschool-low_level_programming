#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: string to encode
 *
 * Return: address of s
 */

char *leet(char *s)
{
	char a[] = "aAeEoOtTlL";
	char b[] = "4433007711";
	int i = 0;

	for (; s[i]; i++)
	{
		int j = 0;

		for (; a[j]; j++)
		{
			if (s[i] == a[j])
			{
				s[i] = b[j];
				break;
			}
		}
	}
	return (s);
}
