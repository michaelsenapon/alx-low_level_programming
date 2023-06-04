#include "main.h"

/**
 * print_number - Print integer using putchar only
 * @n: Integer to print
 */
void print_number(int n)
{
	unsigned int num;

	num = n;

	if (n < 0)
	{
		_putchar('-');
		num = n * -1;
	}
	
	if (num / 10 != 0)
	{
		print_number(num / 10);
	}
	_putchar((num % 10) + '0');
}
