#include "main.h"

/**
 * get_bit - Function that returns the value of a bit at a given index
 * @n: Number to search
 * @index: Index to get
 *
 * Return: Number at index given
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int temp_n;
	int bit;

	temp_n = n;
	bit = temp_n >> index;

	return (bit & 1);
}
