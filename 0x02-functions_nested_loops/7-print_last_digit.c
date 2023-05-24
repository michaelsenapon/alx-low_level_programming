#include "main.h"

/**
 * print_last_digit - Print absolute value of an intege
 * @c: Represent integers
 *
 * Return: Always 0
 */
int print_last_digit(int c)
{
	int last;

	last = c % 10;

	if (last < 0)
	{
		last = last * -1;
	}

	_putchar(last + '0');

	return (last);
}
