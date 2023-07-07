#include <stdio.h>

/**
 * pow - Recursive function that compute power
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

int main(void)
{

	printf("%d\n", _pow(2, 2));
	return (0);
}
