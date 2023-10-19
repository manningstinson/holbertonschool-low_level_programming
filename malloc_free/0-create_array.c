#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * create_array - allocate space for an array
 * @size: unsigned int -size of array
 * @c:char
 * Return:char
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
