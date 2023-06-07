#include "main.h"

/**
 * _memcpy - Function that copies memory area
 * @dest: Buffer of destination
 * @src: Memory Area to copy from
 * @n: Number of bytes to be copied
 *
 * Return: Pointer to destination buffer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
