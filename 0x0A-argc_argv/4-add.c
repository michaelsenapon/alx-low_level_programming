#include "main.h"
#include <stdio.h>


/**
 * main - Program that adds positive numbers
 * @argc: Number of arguments passed to program
 * @argv: Pointers to strings passed to program
 *
 * Return: Sum of arguments passed or 1 otherwise
 */
int main(int argc, char **argv)
{
	int i;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if ((_atoi2(argv[i]) == -1))
		{
			printf("Error\n");
			return (1);
		}
		sum += _atoi2(argv[i]);
	}
	printf("%d\n", sum);
	return (sum);
}

/**
 * _atoi2 - Function
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
