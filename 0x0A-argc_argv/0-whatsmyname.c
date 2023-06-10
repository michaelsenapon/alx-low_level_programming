#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for a program that print its name
 * @argc: Stores the number of arguments supplied to program
 * @argv: Stores the strings supplied to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}
