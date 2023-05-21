#include <stdio.h>

/**
 * main -Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_a = 48;
	int digit_b;

	while (digit_a < 57)
	{
		digit_b = (digit_a + 1);
		while (digit_b <= 57)
		{
			putchar(digit_a);
			putchar(digit_b);
			if (digit_a != 56)
			{
				putchar(',');
				putchar(' ');
			}
			digit_b++;
		}
		digit_a++;
	}
	putchar('\n');
	return (0);
}
