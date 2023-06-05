#include "main.h"

/**
 * _strspn - Function that gets the length of a prefix substring
 * @s: String from which the length is gotten
 * @accept: Substring of the main string
 *
 * Return: The length of the prefix substring
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int length = 0, j = 0, i = 0;

	while (accept[i])
	{
		for (j = 0; s[j]; j++)
		{
			if (accept[i] == s[j])
			{
				if (length < j + 1)
				{
					length = j + 1;
				}
				break;
			}
		}
		i++;
	}
	return (length);
}
