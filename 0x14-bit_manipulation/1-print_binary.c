#include "main.h"

/**
 * print_binary - Function that prints binary representatin of a number
 * @n: Number to be printed in binary
 */
void print_binary(unsigned long int n)
{
	int len = 64;
	int bit;
	int ithbit;
	
	for (; len > 0; len--)
	{
		ithbit = n >> (len - 1);
		bit = ithbit & 1;
		if (bit)
		{
			_putchar(bit + 48);
			len--;
			while (len > 0)
			{
				ithbit = n >> (len - 1);
				bit = ithbit & 1;
				_putchar(bit + 48);
				len--;
			}
			return;
		}
	}
	_putchar(48);
}
