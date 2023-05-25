#include <stdio.h>
void fizz_buzz(void);

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	fizz_buzz();
	return (0);
}

/**
 * fizz_buzz - Function that prints numbers from 1 to 100 as follows
 * replace every multiples of 3 with the string "Fizz"
 * replace every multiples of 5 with the string "Buzz"
 * replace every multiples of both 3 and 5 with the string "FizzBuzz"
 */
void fizz_buzz(void)
{
	int x;

	for (x = 1; x <= 100; x++)
	{
		if (x % 15 == 0)
			printf("FizzBuzz");
		else if (x % 5 == 0)
			printf("Buzz");
		else if (x % 3 == 0)
			printf("Fizz");
		else
			printf("%d", x);
		if (x != 100)
			printf(" ");
	}
	printf("\n");
}
