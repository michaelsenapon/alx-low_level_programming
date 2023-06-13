#include "main.h"
#include <stdlib.h>

/**
 * str_concat - Function concatenates two strings
 * @s1: First string
 * @s2: Second string
 *
 * Return: Pointer to the newly allocated space in memory
 */
char *str_concat(char *s1, char *s2)
{
	int i, j, len_s1 = 0, len_s2 = 0;
	char *buffer;

	/* Find the length of string s1 & s2 */
	if (s1 != NULL)
		for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
			;
	if (s2 != NULL)
		for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
			;

	/* Allocate Memory to store both strings */
	buffer = malloc(sizeof(char) * (len_s1 + len_s2 + 1));

	/* Copy string s1 and s2 into new memory allocated */
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		buffer[i] = s1[i];
	for (j = 0; j < len_s2; j++)
	{
		buffer[i] = s2[j];
		i++;
	}
	buffer[i] = '\0';
	return (buffer);
}
