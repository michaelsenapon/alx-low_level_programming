#include "main.h"
#include <stdio.h>

/**
 * wildcmp - Function that compares two strings if they are identical
 * @s1: First string
 * @s2: Second string
 *
 * Return: 1 if the strings are identiical or 0 if otherwise
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);

	if (*s1 != *s2)
	{
		if (*s2 == '*' && (*(s2 + 1) == *s1))
			return (1 * wildcmp(s1, s2 + 1)); /* move s2 only */
		if (*s2 == '*' && (*(s2 + 1) == '*'))
			return (1 * wildcmp(s1, s2 + 1)); /* move s2 only */
		if (*s2 == '*' && (*(s2 + 1) != '*'))
			return (1 * wildcmp(s1 + 1, s2)); /* move s1 only */
		return (0);
	}
	return (1 * wildcmp(s1 + 1, s2 + 1));
}
