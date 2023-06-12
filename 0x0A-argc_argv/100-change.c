#include <stdio.h>
#include <stdlib.h>

/**
 * main - Function that compute change
 * @argc: Number of arguments passed to program
 * @argv: Pointer to array of strings
 *
 * Return: Minimum number of coins
 */
int main(int argc, char **argv)
{
	int count = 0, change, i = 0;
	int reg[5] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	change = atoi(argv[1]);

	if (change < 0)
	{
		printf("0\n");
		return (0);
	}
	for (;;)
	{
		if (change == 0)
		{
			printf("%d\n", count);
			break;
		}
		if (change >= reg[i])
		{
			count = count + (change / reg[i]);
			change = change % reg[i];
		}
		i++;
	}
	return (0);
}
