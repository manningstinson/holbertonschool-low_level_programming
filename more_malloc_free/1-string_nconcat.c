#include <stdlib.h>
#include "main.h"

/**
 * string_noncat - concatenate two strings - n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2 - concatenate
 *
 * Return: pointer to allocated space with concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0;
	char *result;
	unsigned int a, b;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;

	if (n >= s2_len)
		n = s2_len;

	result = (char *)malloc(s1_len + n + 1);
	if (result == NULL)
		return (NULL);

	for (a = 0; a < s1_len; a++)
		result[a] = s1[a];
	for (b = 0; b < n; b++, a++)
		result[a] = s2[b];
	result[a] = '\0';
return (result);
}
