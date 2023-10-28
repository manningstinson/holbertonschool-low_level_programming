#include "dog.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * free_dog - Frees memory allocated for a dog_t struct
 * @d: Pointer to the dog_t struct to be freed
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
