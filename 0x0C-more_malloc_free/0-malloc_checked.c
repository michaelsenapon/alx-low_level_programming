#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - function that allocates memory using malloc
 * @b: is the size of memory to be allocated
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	else
		return (ptr);
}
