#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha_rev = 'z';

	while (alpha_rev >= 'a')
	{
		putchar(alpha_rev);
		alpha_rev--;
	}
	putchar('\n');
	return (0);
}
