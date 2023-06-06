#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String from which the length is obtained
 * @accept: Substring of the main string
 *
 * Return: The length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

		for (i = 0; s[i]; i++)
		{
			for (j = 0; s[i] != accept[j]; j++)
			{
				if (accept[j] == '\0')
					return (i);
			}
		}
		return (i);
}
