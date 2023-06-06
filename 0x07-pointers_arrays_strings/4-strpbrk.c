#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: String to be searched
 * @needle: String that contains a substring
 *
 * Pointer to the beggining of the located substring
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;
	char *p;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (accept[j] == s[i])
			{
				p = &s[i];
				return (p);
			}
			j++;
		}
		i++;
	}
	return (0);
}
