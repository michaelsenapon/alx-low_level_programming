#include "main.h"

/**
 * _strcmp - Compare two strings
 * @s1: First Pointer to char
 * @s2: Second Pointer to char
 *
 * Return: 0 if equal, negative or positive number
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0' || s2[i] == '\0')
		{
			return (s1[i] - s2[i]);
		}
		else
		{
			i++;
		}
	}
	return (s1[i] - s2[i]);
}
