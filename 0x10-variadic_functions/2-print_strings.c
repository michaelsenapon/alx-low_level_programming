#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - Function that print strings
 * @separator: String to be printed between the strings
 * @n: Number of strings passed to the function
 * @...: Elipses (Other parameters that are hidden)
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str == NULL)
			printf("(nill)");
		else
			printf("%s", str);
		if (separator != NULL)
		{
			if (i != n - 1)
				printf("%s", separator);
		}
	}
	putchar('\n');
}
