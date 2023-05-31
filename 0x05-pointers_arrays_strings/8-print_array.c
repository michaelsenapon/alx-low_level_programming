#include <stdio.h>
#include "main.h"

/**
 * print_array - Print n elements of an array of integers
 * @a: Pointer to integer variable
 * @n: Number of integers
 */
void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
