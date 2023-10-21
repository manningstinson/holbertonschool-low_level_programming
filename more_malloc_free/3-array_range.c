#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of integers from min to max
 * @min: the minimum value
 * @max: the maximum value
 *
 * Return: a pointer to the newly created array, or NULL
 */

int *array_range(int min, int max)
{
	int *arr;
	int a;

	if (min > max)
		return (NULL);
	arr = malloc(sizeof(int) * (max - min + 1));
			if (arr == NULL)
			return (NULL);
			for (a = 0; min <= max; a++, min++)
				arr[a] = min;
		return (arr);
}
