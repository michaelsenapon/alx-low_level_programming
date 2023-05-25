#include "main.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9 omitting 2 and 4
 */
void print_most_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c != '2') || (c != '4'))
			_putchar(c);
	}
	_putchar('\n');
}
