#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Function that print numbers passed as variadic param
 * @separator: String to be printed between numbers
 * @n: Number of integers passed to the function
 * @...: Elipses (Rest of the parameter)
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	putchar('\n');
	va_end(ap);
}
