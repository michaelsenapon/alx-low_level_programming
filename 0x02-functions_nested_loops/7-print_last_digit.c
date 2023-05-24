#include "main.h"

/**
 * print_last_digit - Print the last digit of a number
 * @i: parameter to be checked
 *
 * Return: The value of the last digit
 */
int print_last_digit(int i)
{
	if (i < 0)
		i = _abs(i);
	i = (i % 10);
	return (i);
}

