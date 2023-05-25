#include "main.h"

/**
 * print_times_table - Print the n times table, starting with 0
 * @n: parameter of time table
 */
void print_times_table(int n)
{
	int x, y, res;

	if ((n > 15) || (n < 0))
	{
		return;
	}
	else if (n == 0)
	{
		_putchar(0 + '0');
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y <= n; y++)
			{
				res = (x * y);
				_print(res, y);
			}
		_putchar('\n');
		}
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
/**
 * hundreds - Get the hundreds digit from number
 * @n: parameter to get hundreds digit from
 *
 * Return: The hundreds' digit
 */
int hundreds(int n)
{
	if (n < 100)
		return (-1);
	else if (n < 1000)
		return (n / 100);
	else
		return ((n % 1000) / 100);
}
/**
 * _print - Print number
 * @n: number to be printed
 * @m: parameter used to allocate separators around single digit
 */
void _print(int n, int m)
{
	int H, T, U;

	H = hundreds(n);
	T = tens(n);
	U = unit(n);
	if (n > 99)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(H + '0');
		_putchar(T + '0');
		_putchar(U + '0');
	}
	else if (n > 9)
	{
		_putchar(',');
		_putchar(' ');
		_putchar(' ');
		_putchar(T + '0');
		_putchar(U + '0');
	}
	else
	{
		if (m != 0)
		{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(n + '0');
	}
}
