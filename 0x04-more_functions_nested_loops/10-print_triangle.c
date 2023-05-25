#include "main.h"

/**
 * print_triangle - Prints triangle using '#'
 * @size: parameter for size of triangle
 */
void print_triangle(int size)
{
	int x, y, z;

	if (size < 1)
	{
		_putchar('\n');
	}
	else if (size == 1)
	{
		_putchar('#');
		_putchar('\n');
	}
	else
		for (x = 1; x <= size; x++)
		{
			for (y = size - x; y > 0; y--)
				_putchar(' ');
			for (z = 1; z <= x; z++)
				_putchar('#');
		_putchar('\n');
		}
}
