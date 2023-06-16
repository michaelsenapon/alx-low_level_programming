#include "main.h"
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers
 * @min: is the minimum and first number in the array
 * @max: is the maximum and last number in the array
 *
 * Return: NULL or pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *s, size, i = 0;

	if (min > max)
		return (NULL);

	size = (sizeof(*s) * ((max - min) + 1));

	s = malloc(size);

	if (s == NULL)
		return (NULL);

	while (min <= max)
	{
		s[i] = min;
		min++;
		i++;
	}
	return (s);
}
