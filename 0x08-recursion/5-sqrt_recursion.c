#include "main.h"

/**
 * _sqrt_recursion - Function that compute the natural square root of a numb
 * @n: Number to compute
 *
 * Return: natural sqrt or -1 if number does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	if (n == 1)
		return (1);
	return (test_sqrt(n, 2));
}

/**
 * test_sqrt - Function that test for square roots
 * @n: Number to test for square root
 * @m: Divisors
 *
 * Return: square root of n, or -1
 */
int test_sqrt(int n, int m)
{
	if (m * m == n)
		return (m);
	if (m * m > n)
		return (-1);
	return (test_sqrt(n, m + 1));
}
