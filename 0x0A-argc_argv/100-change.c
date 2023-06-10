#include "main.h"
#include <stdio.h>

/**
 * main - Calculate the min number of coins to make change for money
 * @argc: Number of arguments passed to program
 * @argv: Pointers to strings passed to program
 *
 * Return: Min number of coins or (1 or 0 otherwise)
 */
int main(int argc, char **argv)
{
	int count = 0, cents;
	int reg[5] = {25, 10, 5, 2, 1};
	int *ptr = reg;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = _atoi2(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	while (*ptr)
	{
		if (cents == 0)
		{
			printf("%d\n", count);
			return (count);
		}
		if (cents >= *ptr)
		{
			count += cents / *ptr;
			cents %= *ptr;
			ptr++;
			continue;
		}
		ptr++;
	}
	return (0);
}

/**
 * _atoi2 - Function that converts string to integer
 * @s: String to convert
 *
 * Return: the int result or -1 if non digit character is found
 */
int _atoi2(char *s)
{
	int num = 0;

	while (*s)
	{
		if (*s >= 48 && *s <= 57)
			num = (num * 10) + (*s - 48);
		else
			return (-1);
		s++;
	}
	return (num);
}
