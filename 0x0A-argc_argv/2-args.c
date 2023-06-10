#include <stdio.h>

/**
 * main - Print all arguments it receives
 * @argc: Store the number of arguments passed to the program
 * @argv: Pointer to the strings supplied to the program
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", *argv++);
	}
	return (0);
}
