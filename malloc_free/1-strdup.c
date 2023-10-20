#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - Duplicates a string,  returns a pointer
 *
 * @str: The input string to be duplicated
 *
 * Return: A pointer to the duplicated string
 *
 */

char *_strdup(char *str)
{
	char *duplicate;
	size_t length = 0;
	unsigned int i = 0;

	if (str == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}
		duplicate  = (char *)malloc(length + 1);

	if (duplicate == NULL)
	{
		return (NULL);
	}

	while (str[i])
	{
		duplicate[i] = str[i];
		i++;
	}
	duplicate[i] = '\0';
	return (duplicate);

}
