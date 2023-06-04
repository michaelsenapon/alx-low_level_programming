#include "main.h"

/**
 * leet - Encodes a string into 1337 (leet)
 * @s: Pointer to string for encoding
 *
 * Return: Pointer to the encoded string
 */
char *leet(char *s)
{
	int j, i = 0;
	char leet[] = "AEOTL";
	char code[] = "43071";

	while (s[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == leet[j] || s[i] == leet[j] + 32)
			{
				s[i] = code[j];
			}
		}
		i++;
	}
	return (s);
}
