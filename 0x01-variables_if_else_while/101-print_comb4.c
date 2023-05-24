#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int digit_a = 48;
	int digit_b;
	int digit_c;

	while (digit_a <= 55)
	{
		digit_b = (digit_a + 1);
		digit_c = (digit_b + 1);
		while (digit_b <= 56)
		{
			digit_c = (digit_b + 1);
			while (digit_c <= 57)
			{
				putchar(digit_a);
				putchar(digit_b);
				putchar(digit_c);
				if (digit_a != 55)
				{
					putchar(',');
					putchar(' ');
				}
				digit_c++;
			}
			digit_b++;
		}
		digit_a++;
	}
	putchar('\n');
	return (0);
}
