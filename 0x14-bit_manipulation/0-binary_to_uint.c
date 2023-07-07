#include "main.h"

/**
 * binary_to_uint - Function converts a binary number to an unsigned int
 * @b: Array of character(s) to be converted
 *
 * Return: Integer or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int len, i = 0, result = 0;

	if (b == NULL)
		return (0);

	len = strlen(b);

	len--;
	while (b[i])
	{
		if (b[i] < 48 || b[i] > 57)
			return (0);
		result = result + ((b[i] - 48) * _pow(2, len));
		i++;
		len--;
	}
	return (result);
}

/**
 * _pow - Recursive function that compute power
 * @a: The base number
 * @b: The power number
 *
 * Return: The result of computing power
 */
int _pow(int a, int b)
{
	if (b == 0)
		return (1);
	return (a * _pow(a, b - 1));
}
