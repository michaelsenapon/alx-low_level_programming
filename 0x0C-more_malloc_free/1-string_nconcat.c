#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Function concatenates two strings
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * @n: Number of characters to be copied from s2
 *
 * Return: Pointer to the newly allocated memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, len_s1;
	char *str;

	/* Get length of s1 */
	len_s1  = _strlen(s1);

	/* Allocate memory on the heap */
	str = malloc(sizeof(char) * (len_s1 + n));

	/* Copy s1  and s2 strings into the newly allocated memory */
	if (str == NULL)
		return (NULL);
	for (i = 0; i < len_s1; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		if (s2[j] == '\0')
			break;
		str[i] = s2[j];
		i++;
	}
	str[i] = '\0';
	return (str);
}

/**
 * _strlen - Function to derive length of string
 * @str: Pointer to string
 *
 * Return: Number of characters in string or 0 if pointer points to NULL
 */
unsigned int _strlen(char *str)
{
	unsigned int len = 0;

	if (str != NULL)
	{
		for (; str[len]; len++)
			;
	}
	return (len);
}
