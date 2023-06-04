#include "main.h"
#include <stdio.h>

/**
 * infinite_add - Add two numbers spread out into an array of characters
 * @n1: First number
 * @n2: Second number
 * @r: Buffer to store the result of the addition
 * @size_r: The buffer size
 *
 * Return: A pointer to the result or 0 if result cannot be stored in r
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int ind1, ind2, temp, tens = 0;
	char *err = '\0';

	/* Find the Last index of First and Second Number */
	for (ind1 = 0; n1[ind1] != '\0'; ind1++)
		;
	ind1--;
	for (ind2 = 0; n2[ind2] != '\0'; ind2++)
		;
	ind2--;

	while (ind1 >= 0 && ind2 >= 0)
	{
		temp = tens + (n1[ind1] - 48) + (n2[ind2] - 48);
		if (size_r - 2 < 0)
			return (err);

		if (temp > 9)
		{
			tens = temp / 10;
			r[size_r - 2] = (temp % 10) + 48;
		}
		else
		{
			r[size_r - 2] = temp + 48;
			tens = 0;
		}
		size_r--;
		ind1--;
		ind2--;
	}

	if (ind1 > ind2)
	{
		while (ind1 >= 0)
		{
			if (size_r - 2 < 0)
				return (err);

			temp = tens + (n1[ind1] - 48);
			if (temp > 9)
			{
				tens = temp / 10;
				r[size_r - 2] = (temp % 10) + 48;
			}
			else
			{
				r[size_r - 2] = temp + 48;
				tens = 0;
			}
			size_r--;
			ind1--;
		}
	}
	else
	{
		while (ind2 >= 0)
		{
			if (size_r - 2 < 0)
				return (err);

			temp = tens + (n2[ind2] - 48);
			if (temp > 9)
			{
				tens = temp / 10;
				r[size_r - 2] = (temp % 10) + 48;
			}
			else
			{
				r[size_r - 2] = temp + 48;
				tens = 0;
			}
			size_r--;
			ind2--;
		}
	}
	if (tens > 0 && size_r - 2 < 0)
		return (err);
	else if (tens > 0)
	{
		r[size_r - 2] = tens + 48;
		tens = 0;
	}
	return (r);
}
