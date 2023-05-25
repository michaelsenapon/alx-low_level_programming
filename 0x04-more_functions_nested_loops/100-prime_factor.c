#include <stdio.h>
int largest_prime(long n);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int prime;

	prime = largest_prime(612852475143);
	printf("%d\n", prime);
	return (0);
}

/**
 * largest_prime - Function that compute largest prime factor
 * @n: parameter to calculate prime numbers on
 *
 * Return: The largest prime number
 */
int largest_prime(long n)
{
	int lprime, x = 2;

	for (;;)
	{
		if (n == 1)
		{
			return (lprime);
		}
		else
		{
			if (n % x == 0)
			{
				lprime = x;
				n /= x;
			}
			else
			{
				x++;
			}
		}
	}
}

