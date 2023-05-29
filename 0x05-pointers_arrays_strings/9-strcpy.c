#include "main.h"

/**
 * *_strcpy -  function that copies the string pointed to by src
 * @dest: char that point to address
 * @src: char type that point to address
 * Description: Copy the string pointed to by pointer `src` to
 * the buffer pointed to by `dest`
 * Return: Pointer to `dest`
 */

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	} while (src[i] != '\0');

	return (dest);
}
