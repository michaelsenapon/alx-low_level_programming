#include "main.h"

/**
 * _strstr - Function that locates a substring
 * @haystack: The main string
 * @needle: The substring
 *
 * Return: Pointer to the beginning of the located substring
 * Or NULL if the string is not found
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j = 0, count = 0;

	if (needle[0] == '\0')
		return (haystack);
	for (i = 0; haystack[i]; i++)
	{
		while (haystack[i] == needle[j])
		{
			i++;
			j++;
			count++;
			if (needle[j] == '\0')
				return (haystack + (i - count));
		}
	}
	return ('\0');
}
