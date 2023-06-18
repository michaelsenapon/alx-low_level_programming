#include "main.h"
#include <stdlib.h>

/**
 * array_range - Function creates an array of integers using malloc
 * @min: Minimum number to be copied into memory
 * @max: Maximum number to be copied into memory
 *
 * Return: Pointer to the newly created array or NULL if malloc fails
 */
int *array_range(int min, int max)
{
	int i, nmemb;
	int *ptr;

	/* Check if numbers are accurately passed then allocate */
	if (max > min)
	{
		nmemb = (max - min) + 1;
		ptr = malloc(sizeof(int) * nmemb);

		/* Check if malloc succeed then assign numbers to the array */
		if (ptr == NULL)
			return (NULL);
		for (i = 0; i < nmemb; i++)
		{
			*(ptr + i) = min;
			min++;
		}
		return (ptr);
	}
	return (NULL);
}
