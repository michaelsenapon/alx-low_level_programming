#include "main.h"

/**
 * cap_string - Capitalize all words of a string
 * @s: Pointer to an array of characters to search
 *
 * Return: Pointer to the array of characters
 */
char *cap_string(char *s)
{
	int j, i = 1;
	char sep[] = " \t\n,;.!?\"(){}";

	if (s[0] > 96 && s[0] < 123)
		s[0] -= 32;

	while (s[i])
	{
		for (j = 0; sep[j] != '\0'; j++)
		{
			if (s[i] == sep[j] && small_alpha(s[i + 1]))
			{
				s[++i] -= 32; /* move char pointer 1 step then change to Big alpha */
				i++;
				break;
			}
		}
		i++;
	}
	return (s);
}

/**
 * small_alpha - Test char to know if its small alphabet or not
 * @c: character to be tested
 *
 * Return: 1 if its small alphabet or 0 if its not
 */
int small_alpha(char c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);
}
