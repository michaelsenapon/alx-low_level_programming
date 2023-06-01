#include "main.h"

/**
 * _strncat - Concatenates two strings taking n number of characters from src string
 * @dest: Destination string
 * @src: Source string
 * @n: Number of characters to be copied
 *
 * Return: Pointer to the resulting string <dest>
 */
char *_strncat(char *dest, char *src, int n)
{
	int destlen = 0;
	int i;

	while (dest[destlen])
		destlen++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[destlen + i] = src[i];
	dest[destlen + i] = '\0';

	return (dest);
}
