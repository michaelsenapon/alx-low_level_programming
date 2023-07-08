#include "main.h"
#include <stdlib.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: address of the number to be set
 * @index: position of the bit to be set
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);

	mask = 1 << index;
	*n = *n | mask;
	return (1);
}
