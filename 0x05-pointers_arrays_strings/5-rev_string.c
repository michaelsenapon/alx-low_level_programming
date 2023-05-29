#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Pointer to char string
 */
void rev_string(char *s)
{
	int len = 0, i;

	while (s[len])
		len++;

	for (i = 0; i < len / 2; i++)
	{
		s[i] = s[i] + s[len - 1 - i];
		s[len - 1 - i] = s[i] - s[len - 1 - i];
		s[i] = s[i] - s[len - 1 - i];
	}
}
