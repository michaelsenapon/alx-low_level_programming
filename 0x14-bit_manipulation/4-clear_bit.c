#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - function that sets the value of a bit to 0 at a given index
 * @n: address of integer to access
 * @index: index of the bit to set to 0
 *
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	mask = (1 << index);
	*n = (*n & ~mask);
	return (1);
}
