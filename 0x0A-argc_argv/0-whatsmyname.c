#include "main.h"
#include <stdio.h>

/**
 * main - Entry point for a program that print its name
 * @argc: Stores the number of arguments supplied to program
 * @argv: Stores the strings supplied to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
