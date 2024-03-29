#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int unit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	unit = (n % 10);
	if (unit == 0)
		printf("Last digit of %i is %i and is 0\n", n, unit);
	else if (unit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, unit);
	else
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, unit);
	return (0);
}
