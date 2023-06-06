#include "main.h"

/**
 * _strpbrk - Function that locates a substring
 * @s: String to be searched
 * @accept: String that contains a substring
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
