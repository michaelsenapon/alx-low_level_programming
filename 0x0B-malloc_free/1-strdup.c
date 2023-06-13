#include "main.h"
#include <stdlib.h>

/**
 * _strdup - Function allocate new space in memory
 * @str: String passed to the function to be copied
 *
 * Return: Pointer to the new string
 */
char *_strdup(char *str)
{
	int i, len = 0;
	char *buffer;

	/* Find the length of string str */
	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;

	/* Allocate memory for string str */
	buffer = malloc(sizeof(char) * (len + 1));
	if (buffer == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
		buffer[i] = str[i];
	buffer[i] = '\0';
	return (buffer);
}
