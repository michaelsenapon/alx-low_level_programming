#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Print all natural numbers from n to 98
 * @n: parameter for starting point
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("98\n");
	}
	else if (n < 98)
	{
		for (; n < 98; n++)
			printf("%d, ", n);
		printf("%d\n", n);
	}
	else
	{
		for (; n > 98; n--)
			printf("%d, ", n);
		printf("%d\n", n);
	}
}
