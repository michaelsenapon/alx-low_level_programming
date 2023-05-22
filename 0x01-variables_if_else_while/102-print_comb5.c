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

	while (digit_a <= 57)
	{
		digit_b = 48;
		digit_c = digit_a;
		digit_d = 49;
		
		while (digit_b <= 56)
		{
			digit_c = digit_a;
			digit_d = digit_b + 1;

			while (digit_c <= 57)
			{
				if (digit_a == digit_c)
					digit_d = (digit_b + 1);
				else
					digit_d = 48;

				while (digit_d <= 57)
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
					digit_d++;
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

