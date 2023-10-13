#include "main.h"

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: The integer to be checked
 *
 * Return: 1 if the number is prime, Otherwise 0
 *
 */

int is_prime_number(int n)
{
	int i = 5;

	if (n <= 1)
	{
		return (0);
	}
	if (n <= 3)
	{
		return (1);
	}
	if (n % 2 == 0 || n % 3 == 0)
	{
		return (0);
	}
	for (; i * i <= n; i += 6)
	{
		if (n % i == 0 || n % (i + 2)  == 0)
		{
			return (0);
		}
	}

	return (1);
}
