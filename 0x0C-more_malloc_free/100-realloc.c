#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Function that re-allocates a memory block using malloc and free
 * @ptr: Pointer to the old allocated memory
 * @old_size: Size of old memory
 * @new_size: Size of the new memory
 *
 * Return: Pointer to the new memory, or old memory or NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *old_ptr = ptr;
	char *new_ptr;

	/* Check if ptr != NULL AND new_size == 0 */
	if (ptr != NULL && new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	/* Check if ptr == NULL so you allocate with new_size */
	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}

	/* Check if new_size != old_size so you can reallocate with new_size */
	if (new_size != old_size)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		for (i = 0; i < old_size; i++)
		{
			if (i == new_size)
				break;
			new_ptr[i] = old_ptr[i];
		}
		free(ptr);
		return (new_ptr);
	}
	return (ptr);
}
