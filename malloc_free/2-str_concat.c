#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * str_concat - Concatenates two strings.
 *
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the newly allocated concatenated string.
 *         Returns NULL on failure.
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated = NULL;
	unsigned int len1 = 0, len2 = 0;
	unsigned int a = 0;
	unsigned int b = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (concatenated == NULL)
	return (NULL);

	for (; a < len1; a++)
	concatenated[a] = s1[a];

	for (; b  < len2; b++)
	concatenated[a + b] = s2[b];

	concatenated[a + b] = '\0';

	return (concatenated);
}
