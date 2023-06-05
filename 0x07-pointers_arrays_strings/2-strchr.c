#include "main.h"

/**
 * _strchr - Function that locates a character in a string
 * @s: String to search
 * @c: character to be searched
 *
 * Return: Pointer to the first occurrence of the character if found
 * Or 'NULL' if character is not found
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == c)
			return (s + i);
		i++;
	}
	if (s[i] == c)
		return (s + i);
	return ('\0');
}
