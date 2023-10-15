#include "main.h"

/**
 * find_sqrt - helper function to find the square root recursively
 * @n: integer to find sqrt of
 * @guess: current guess for the square root
 * Return: natural square root or -1
 */
int find_sqrt(int n, int guess)
{
    if (guess * guess == n)
        return guess;
    else if (guess * guess > n)
        return -1;
    else
        return find_sqrt(n, guess + 1);
}

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: integer to find sqrt of
 * Return: natural square root or -1
 */
int _sqrt_recursion(int n)
{
    if (n == 0)
        return 0;
    if (n < 0)
        return -1;

    return find_sqrt(n, 1);
}

