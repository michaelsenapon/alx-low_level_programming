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
	int digit_d;

	for (; digit_a <= 57; digit_a++)
	{
		digit_b = 48;
		digit_c = digit_a;
		digit_d = 49;
		for (; digit_b <= 56; digit_b++)
		{
			digit_c = digit_a;
			digit_d = digit_b + 1;
			for (; digit_c <= 57; digit_c++)
			{
				if (digit_a == digit_c)
					digit_d = (digit_b + 1);
				else
					digit_d = 48;
				for (; digit_d <= 57; digit_d++)
				{
					putchar(digit_a);
					putchar(digit_b);
					putchar(' ');
					putchar(digit_c);
					putchar(digit_d);
					if (!(digit_a == 57 && digit_b == 56))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
