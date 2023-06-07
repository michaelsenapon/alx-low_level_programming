#include "main.h"

/**
 * _pow_recursion - Function that find the result of x to the power of y
 * @x: base number
 * @y: power number
 *
 * Return: the result of computation
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	if (y == 1)
		return (x);
	return (x * _pow_recursion(x, y - 1));
}
