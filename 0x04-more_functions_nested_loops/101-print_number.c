#include "main.h"

/**
 * print_number - Print integer using only putchar
 * @n: integer to be printed
 * the function separate the integer in order to use putchar
 * to print each character which makes up the integer
 */
void print_number(int n)
{
	int i, div;

	if (n < 0)
		_putchar('-');

	i = _abs(n);

	div = 1;

	while ((i / (div * 10) != 0))
		div *= 10;

	for (;;)
	{
		if (div == 0)
			return;
		if ((i < 10) && (div == 1))
		{
			_putchar(i + '0');
			return;
		}
		else
		{
			_putchar((i / div) + '0');
			i %= div;
			div /= 10;
			if (div > i)
			{
				_putchar('0');
				div /= 10;
			}
		}
	}
}
/**
 * _abs - Compute the absolute value of number
 * @c: number to compute absolute value on
 *
 * Return: The absolute value
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	return (c);
}
