#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: the character used to initialize the array
*/

char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int i = 0;

	if (size == 0)
	{
		return (NULL);
	}

	array = (char *) malloc(size * sizeof(char));

	if (array == NULL)
	{
		return (NULL);
	}

	for ( ; i < size; i++)
	{
		array[i] = c;
	}

	return (array);
}
