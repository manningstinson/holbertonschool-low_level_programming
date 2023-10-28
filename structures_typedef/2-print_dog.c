#include "dog.h"
#include <stdio.h>

/**
 * print_dog - Dogt Struct
 * @d: Pointer to the dog struct
 *
 * Function prints information about a dog
 * If field is NULL, prints (nil)
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Breed: %s\n", (d->breed != NULL) ? d->breed : "(nil)");
	printf("Age: %f\n", d->age);
}
