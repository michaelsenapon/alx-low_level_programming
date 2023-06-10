#include "main.h"
#include <stdio.h>

/**
 * main - Program that multiplies two numbers
 * @argc: Store the number of arguments passed to the program
 * @argv: Pointer to the strings supplied to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	result = _atoi(argv[1]) * _atoi(argv[2]);
	printf("%d\n", result);
	return (0);
}

/**
 * _atoi - convert a string to an integer.
 * @s: the string to be comverted.
 *
 *Return: The integer value of the comverted string.
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = (num * 10) + (*s - '0');

		else if (num > 0)
			break;
	} while (*s++);
	return (num * sign);
}
