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
	if (n <= 1)
		return (0);
	if (divisor == 1)
		return (1); 
	if (n % divisor  == 0)
		return (0);
	return (is_prime_recursive(n, divisor - 1));
}
