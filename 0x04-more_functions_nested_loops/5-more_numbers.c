#include "main.h"

/**
 * more_numbers(void) - Prints 10 times the numbers, from 0 to 14
 */
void more_numbers(void)
{
	int i, j, T, U;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			T = tens(j);
			U = unit(j);

			if (j > 9)
			{
				_putchar(T + '0');
			}
			_putchar(U + '0');
		}
		_putchar('\n');
	}
}

/**
 * unit - Get the unit digit from number
 * @n: parameter to get unit from
 *
 * Return: The unit digit
 */
int unit(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else
		return (n % 10);
}

/**
 * tens - Get the tens digit from number
 * @n: parameter to get tens from
 *
 * Return: The tens digit
 */
int tens(int n)
{
	if (n < 10)
		return (-1);
	else if (n < 100)
		return (n / 10);
	else
		return ((n % 100) / 10);
}

