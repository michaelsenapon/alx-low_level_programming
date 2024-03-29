#include "main.h"

/**
 * _memset - Function that fills memory with a constant byte
 * @s: Pointer to the buffer to be filled
 * @b: Constant byte
 * @n: Number of bytes of
 *
 * Return: A pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
