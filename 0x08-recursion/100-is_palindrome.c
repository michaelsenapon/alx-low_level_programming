#include "main.h"

/**
 * is_palindrome - Function test a string if its palindrome or not
 * @s: String to test
 *
 * Return: 1 for Success or 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (test_palindrome(s, len, len / 2));
}

/**
 * _strlen_recursion - This function returns the length of a string
 * @s: The string to compute
 *
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

/**
 * test_palindrome - Compute for palindrome
 * @s: The string to test
 * @len: The length of the string
 * @n: Half of the string
 *
 * Return: 1 if string is palindrome or 0 if otherwise
 */
int test_palindrome(char *s, int len, int n)
{
	if (n == 0)
		return (1);
	if (*s != s[len - 1])
	{
		return (0);
	}
	return (1 * test_palindrome(s + 1, len - 2, n - 1));
}
