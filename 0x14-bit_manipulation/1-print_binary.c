#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * print_binary - Prints the binary representation of a number
  * @n: the decimal equivalent of binary
  *
  * Return: Void
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
  * _divide - function to divide recursively
  * @n: the int to divide
  *
  * Return: void
  */
void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
