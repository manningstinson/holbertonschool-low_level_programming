#include "main.h"

/**
 * _sqrt_recursive - calculates the sqrt of a number
 * @n:int
 *
 * Return: int
 */

int _sqrt_recursion(int n)
{

	if (n < 0)
	{
		return (-1);
	}

	if (n == 0 || n == 1)
	{
		return (n);
	}

	return ( _sqrt_recursive(n. n));
}

/**
 * _sqrt_recursive - recursive helper function
 * @n:int
 * @x:int
 *
 * Return: int
 */

 int _sqrt_recursion(int n, int x)
{
	int square = x * x;

	if (square == n)
	{
		return (x);
	}
	else if (square > n)
	{
		return (-1);
	}
	return ( _sqrt_recursive(n, x + 1));
}
