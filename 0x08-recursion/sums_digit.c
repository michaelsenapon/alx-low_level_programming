#include <stdio.h>

int sum_d(int n)
{
	if (n == 1)
		return (1);
	return (n + sum_d(n - 1));
}

int main(void)
{
	printf("%d\n", sum_d(10));
	return (0);
}

