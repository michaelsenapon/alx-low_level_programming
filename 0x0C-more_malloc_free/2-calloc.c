#include "main.h"
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each elements in the array
 *
 * Return: NULL or pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);

	j = (nmemb * size);
	s = malloc(j);

	if (s == NULL)
		return (NULL);

	for (i = 0; i < j; i++)
		s[i] = 0;

	return (s);
}
