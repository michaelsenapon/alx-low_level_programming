#include "main.h"

/**
 * get_endianness - A function that checks the endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	unsigned int val = 1;
	unsigned char *ptr = (unsigned char *)&val;

	if (*ptr == 1)
		return (1);
	else if (*ptr == 0)
		return (0);
	return (-1);
}
