#include "main.h"


/**
 * _atoi - Convert a string to an integer
 * @s: String to be converted
 *
 * Return: An integer
 */
int _atoi(char *s)
{
	int index;
	unsigned int number = 0;
	int i = 1;

	index = last_digit_index(s);

	if (index == -1)
	{
		return (0);
	}
	else
	{
		while (index >= 0)
		{
			if (s[index] == 45)
			{
				number *= -1;
			}
			else if (s[index] < 48 || s[index] > 57) /* if char  */
			{
				index--;
				continue;
			}
			else
			{
				number += (s[index] - '0') * i;
				i *= 10;
			}
			index--;
		}
		return (number);
	}
}

/**
 * last_digit_index - Compute the index of the last digit found in a string
 * @s: String to be searched
 *
 * Return: The index of the last digit or -1 if no digit is found
 */
int last_digit_index(char *s)
{
	int strlen = 0;
	int index = -1;

	while (s[strlen])
	{
		if (s[strlen] < 48 || s[strlen] > 57) /* if value is char  */
		{
			strlen++;
			continue;
		}
		else
		{
			while (s[strlen] > 47 && s[strlen] < 58)
			{
				index = strlen;
				strlen++;
			}
			break;
		}
	}
	return (index);
}
