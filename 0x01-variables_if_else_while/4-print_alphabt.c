#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alpha = 'a';

	for (; alpha <= 'z'; alpha++)
	{
		if (alpha == 'e' || alpha == 'q')
		{
			continue;
		}
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
