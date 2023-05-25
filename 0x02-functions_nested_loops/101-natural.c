#include <stdio.h>

/**
 * main - compute and print sum of all multiples of 3 or 5
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	int j;

	while (i < 1024)
	{
		if ((i % 3 == 0) || (i % 5 == 0))
		{
			j += i;
		}
		i++;
	}
	printf("%d\n", j);
	return (0);
}
