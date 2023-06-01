#include "main.h"

/**
 * reverse_array - Reverses the content of an array of integers
 * @a: Pointer to array of integers to be reversed
 * @n: Number of elements in the array
 */
void reverse_array(int *a, int n)
{
	int i = 0;

	while (i < n / 2)
	{
		a[i] = a[i] + a[n - 1 - i];
		a[n - 1 - i] = a[i] - a[n - 1 - i];
		a[i] = a[i] - a[n - 1 - i];
		i++;
	}
}
