#include "main.h"

/**
 * rot13 - Encodes a string using rot13
 * @s: Pointer to character array to be encoded
 *
 * Return: Pointer to the string encoded
 */
char *rot13(char *s)
{
	int j, i = 0;
	char string[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char code[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (s[i])
	{
		for (j = 0; string[j] != '\0'; j++)
		{
			if (s[i] == string[j])
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
