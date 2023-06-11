#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - Calculate the min number of coins to make change for money
 * @argc: Number of arguments passed to program
 * @argv: Pointers to strings passed to program
 *
 * Return: Min number of coins or (1 or 0 otherwise)
 */
int main(int argc, char **argv)
{
	int count = 0, cents, i;
	int reg[5] = {25, 10, 5, 2, 1};
/*
 *	int *ptr = reg;
*/
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	for (i = 0; i < 6; i++)
	{
		if (cents == 0)
		{
			printf("%d\n", count);
			return (count);
		}
		if (cents >= reg[i])
		{
			count += cents / reg[i];
			cents %= reg[i];
		}
	}
	return (0);
}
