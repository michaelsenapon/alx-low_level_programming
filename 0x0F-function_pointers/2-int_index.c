#include "function_pointers.h"

/**
 * int_index - Function that searches for an integer
 * @array: Array of integers to search
 * @size: Number of elements in the array
 * @cmp: Pointer to the function that compare values
 *
 * Return: Index of first element where cmp function doesn't return 0
 * -1 if no element matches,
 * -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if ((array == NULL || cmp == NULL) || size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		result = cmp(array[i]);
		if (result != 0)
			return (i);
	}
	return (-1);
}
