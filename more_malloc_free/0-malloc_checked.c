#include <stddef.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocate
 *
 * Return: a pointer to the allocated memory, if failure return 98
 *
 */

void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		_exit(98);
	}
	return (ptr);
}
