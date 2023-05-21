#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char dec = '0';

	while (dec <= '9')
	{
		putchar(dec);
		dec++;
	}
	putchar('\n');
	return (0);
}
