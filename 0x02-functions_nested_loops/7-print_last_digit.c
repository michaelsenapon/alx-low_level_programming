#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @i: parameter to be checked
 *
 * Return: The value of the last digit
 */
int print_last_digit(int i)
{
	i = (i % 10);
	if (i < 0)
		i = _abs(i);
	_putchar(i + '0');
	return (i);
}
/**
 * _abs - Computes the absolute value of an integer
 * @c: integer to convert to absolute
 *
 * Return: Absolute value
 */
int _abs(int c)
{
	if (c < 0)
		return (c * -1);
	else
		return (c);
}
