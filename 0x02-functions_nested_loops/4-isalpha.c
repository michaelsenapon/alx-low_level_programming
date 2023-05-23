#include "main.h"

/**
 * _isalpha - Checks for alphabetic character
 * @c: parameter to be checked
 *
 * Return: 1 if c is an alphabet but 0 if otherwise
 */
int _isalpha(int c)
{
	int a = _islower(c);
	int b = _isupper(c);

	if (a == 1 || b == 1)
		return (1);
	else
		return (0);
}
/**
 * _islower - Checks for lowercase character
 * @c: character argument to be checked
 *
 * Return: 1 if c is lowercase and 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

/**
 * _isupper - Checks for uppercase character
 * @c: character argument to be checked
 *
 * Return: 1 if c is uppercase and 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
