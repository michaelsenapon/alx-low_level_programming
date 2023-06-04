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
	char leet[] = "aAeEoOtTlL";
	char code[] = "4433007711";

	while (s[i])
	{
		for (j = 0; leet[j] != '\0'; j++)
		{
			if (s[i] == leet[j])
			{
				s[i] = code[j];
				i++;
				break;
			}
		}
		i++;
	}
	return (s);
}
