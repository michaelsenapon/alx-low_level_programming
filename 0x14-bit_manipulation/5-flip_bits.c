#include "main.h"
#include <stdlib.h>

/**
 * flip_bits - function that returns number of bits needed to flip to get from
 * one number to another.
 * @n: number to flip
 * @m: number to flip to
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int mask;
	unsigned int count = 0;

	mask = (n ^ m);

	while (mask)
	{
		if (mask & 1)
			count++;

		mask = mask >> 1;
	}
	return (count);
}
