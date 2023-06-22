#include "function_pointers.h"

/**
 * array_iterator - Exe a function passed as parameter on each array elem
 * @array: array to be worked on
 * @size: size of array
 * @action: Function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}
