#include "function_pointers.h"

/**
 * array_iterator - Execute a function on each element of an array
 * @array: The array of integers
 * @size: The size of the array
 * @action: Pointer to the function to execute on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		size_t i;

		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
