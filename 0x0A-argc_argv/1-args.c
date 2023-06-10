#include "main.h"
#include <stdio.h>

/**
 * main - Program that print the no of arguments passed into it
 * @argc: Stores the number of arguments passed to the program
 * @argv: Stores the strings passed to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
