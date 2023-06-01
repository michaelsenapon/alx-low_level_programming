#include "main.h"

/**
 * _strncpy - Copies n number of bytes into another string
 * doesn't copy bytes that appear after Null byte
 * @dest: Pointer to the String to be copied to
 * @src: Pointer to the string to be copied from
 * @n: Number of bytes to copy
 *
 * Return: Pointer to the Destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n)
	{
		if (src[i] == '\0')
		{
			for (; i < n; i++)
			{
				dest[i] = '\0';
			}
			break;
		}
		else
		{
			dest[i] = src[i];
			i++;
		}
	}
	return (dest);
}
