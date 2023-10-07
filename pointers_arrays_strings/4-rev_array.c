#include "main.h"

/**
 * _reverse - Reverse a portion of an array of integers
 * @a: Pointer to the array
 * @n: Number of elements to reverse
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		int temp = a[start];

		a[start] = a[end];
		a[end] = temp;

		start++;
		end--;
	}
}
