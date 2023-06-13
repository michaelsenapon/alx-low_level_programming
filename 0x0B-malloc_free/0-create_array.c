#include "main.h"
#include <stdlib.h>

/**
 * create_array - Pointer function that creates array of chars
 * @size: Array size
 * @c: Character to initialize array with
 *
 * Return: Pointer to the array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *buffer;

	if (size == 0)
		return (NULL);
	buffer = malloc(sizeof(size + 1 * (int)));
	if (buffer == NULL)
		return (NULL);
	i = 0;
	while (i < size)
	{
		*(buffer + i) = c;
		i++;
	}
	return (buffer);
}
