#include "main.h"

/**
 * print_number - Print integer using only putchar
 * @n: integer to be printed
 * the function separate the integer in order to use putchar
 * to print each character which makes up the integer
 */
void print_number(int n)
{
	int div = 1;

	if (n < 0)
	{
		_putchar('-');
		n = (n * -1);
	}
	/* Loop to get the highest divisor needed */
	while ((n / (div * 10) != 0))
		div *= 10;

	for (;;)
	{
		if (div == 0)
			return;
		if ((n < 10) && (div == 1))
		{
			_putchar(n + '0');
			return;
		}
		else
		{
			_putchar((n / div) + '0');
			n %= div;
			div /= 10;
			while (div > n)
			{
				_putchar('0');
				div /= 10;
			}
		}
	}
}
