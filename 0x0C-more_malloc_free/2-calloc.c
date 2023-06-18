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
	void *ptr;

	/* Allocate memory using malloc */
	ptr = malloc(nmemb * size);
	
	if (ptr == NULL)
		return (NULL);

	/* Check if nmemb OR size is 0 or malloc fails */
	if (nmemb == 0 || size == 0)
		return (NULL);
	return (ptr);
}
