#include "main.h"

/**
 * _abs - Print absolute value of an integer
 * @c: Represent integers
 *
 * Return: Success (0)
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = (c * (-1));

		return (abs_val);
	}

	return (c);
}
