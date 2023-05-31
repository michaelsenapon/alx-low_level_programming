#include "main.h"

/**
 * puts_half - Prints half of a string, followed by a new line
 * @str: Pointer to string
 */
void puts_half(char *str)
{
	int i, strlen = 0;

	while (str[strlen])
		strlen++;
	i = strlen / 2;

	if (strlen % 2 != 0)
		_putchar(str[(strlen - 1) / 2 - 1]);
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
