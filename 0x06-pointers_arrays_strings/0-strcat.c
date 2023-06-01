#include "main.h"

/**
 * _strcat - Concatenate two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to the resulting string <dest>
 */
char *_strcat(char *dest, char *src)
{
	int destlen = 0, i = 0;

	while (dest[destlen] != '\0')
		destlen++;

	while (src[i])
	{
		dest[destlen + i] = src[i];
		i++;
	}
	dest[destlen + i] = '\0';
	return (dest);
}
