#include "main.h"
#include <stdlib.h>

/**
 * _calloc - Function allocate memory for an array, using malloc
 * @nmemb: Number of elements contained in the array
 * @size: The size of each element contained in the array
 *
 * Return: void pointer to the array or NULL if failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, mul;
	char *ptr;

	mul = nmemb * size;

	/* Check if nmemb OR size is 0 or malloc fails */
	if (mul == 0)
		return (NULL);

	/* Allocate memory using malloc */
	ptr = malloc(mul);
	if (ptr == NULL)
		return (NULL);
	for (i = 0; i < mul; i++)
		*(ptr + i) = 0;

	return (ptr);
}
