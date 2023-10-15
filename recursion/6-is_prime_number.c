#include "main.h"

/**
 * is_prime_recursive - Recursive helper function to check for prime number
 * @n: The number to check
 * @divisor: The current divisor to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_recursive(int n, int divisor) {
    if (n <= 1) {
        return 0;  /* Numbers less than or equal to 1 are not prime */
    } else if (n == 2) {
        return 1;  /* 2 is a prime number */
    } else if (divisor == 1) {
        return 1;  /* Base case: n is only divisible by 1, so it's prime */
    } else if (n % divisor == 0) {
        return 0;  /* n is divisible by a number other than 1 and itself, so it's not prime */
    } else {
        return is_prime_recursive(n, divisor - 1);  /* Check the next divisor */
    }
}

/**
 * is_prime_number - Check if a number is prime
 * @n: The number to check
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n) {
    return is_prime_recursive(n, n - 1);  /* Start checking with n-1 as the divisor */
}

