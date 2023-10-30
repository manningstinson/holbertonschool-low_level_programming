#include "function_pointers.h"

/**
 * int_index - Search for an integer in an array
 * @array: The array of integers
 * @size: The size of the array
 * @cmp: Pointer to the function to be used to compare values
 *
 * Return: Index of the first element for which cmp does not return 0, or -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL && cmp != NULL)
	{
		int i, result;

		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
			{
				return (i);
			}
		}
	}
	return (-1);
}
