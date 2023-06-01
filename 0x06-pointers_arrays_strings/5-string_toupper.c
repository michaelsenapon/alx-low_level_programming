#include "main.h"

/**
 * string_toupper - Changes all lowercase letters of a string to uppercase
 * @s: Pointer to array of chars to change
 *
 * Return: Pointer to the array of chars changed
 */
char *string_toupper(char *s)
{
	int i = 0;

	while (s[i])
	{
		if (s[i] > 96 && s[i] < 122)
		{
			s[i] = s[i] - 32;
		}
		i++;
	}
	return (s);
}
