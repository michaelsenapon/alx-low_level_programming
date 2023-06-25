#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - Program that calculate arguments passed
 * @ac: Number of arguments passed
 * @argv: Pointers to the strings passed
 *
 * Return: Result of calculation
 * 98 if number or arguments is wrong
 * 99 if operator is wrong
 * 100 if division or mode has 0 as divisor
 */
int main(int ac, char *argv[])
{
	int result;
	int a = atoi(argv[1]);
	int b = atoi(argv[3]);
	int (*ptr)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}

	ptr = get_op_func(argv[2]);

	if (ptr == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	result = ptr(a, b);
	printf("%d\n", result);
	return (0);
}
