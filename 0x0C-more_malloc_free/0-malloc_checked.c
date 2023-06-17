#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - Function allocates memory using malloc
 * @b: Number of bytes to allocates
 *
 * Return: Pointer to the allocated memory or 98 after termination of process
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
