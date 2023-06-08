#include "main.h"

/**
 * is_prime_number - Function that test for prime number
 * @n: Number to test
 *
 * Return: 1 if number is prime, otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	if (n == 2)
		return (1);
	return (test_prime(n, 2));
}

/**
 * test_prime - Recursive function that test for prime
 * @n: Number to test
 * @m, divisors
 *
 * Return: 2 if n is prime number
 * -1 if n is not a prime number
 * Call is_prime
 */
int test_prime(int n, int m)
{
	if (n % m == 0 && n != m)
		return (0);
	if (n % m == 0 && m == n)
		return (1);
	return (test_prime(n, m + 1));
}
