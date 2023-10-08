#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - print sum of 2 digona
 * @a:int
 * @size:int size
 * Return:void
 */

void print_diagsums(int *a, int size)
{
	int sum_primary = 0;
	int sum_secondary = 0;
	int i = 0;

	for (; i < size; i++)
	{
		sum_primary += a[i * size + i];
		sum_secondary += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", sum_primary, sum_secondary);
}
