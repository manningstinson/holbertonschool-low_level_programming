#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array and initializes to zero
 * @nmemb: number of elements
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	void *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);

	for (a = 0; a < (nmemb * size); a++)
	{
		*((char *)ptr + a) = 0;
	}
	return (ptr);
}
