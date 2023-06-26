#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - Function prints arguments passed based on format specfier
 * @format: String that identify the data types of arguments passed
 */
void print_all(const char * const format, ...)
{
	int t_indx, f_indx;
	char *sep = "";
	va_list ap;

	/* Structure initialization to required functions */
	f_type id[] = {
		{'c', f_char},
		{'i', f_int},
		{'f', f_float},
		{'s', f_str}
	};

	va_start(ap, format);

	f_indx = 0;
	while (format != NULL && format[f_indx])
	{
		t_indx = 0;
		while (t_indx < 4)
		{
			if (format[f_indx] == id[t_indx].ch)
			{
				printf("%s", sep);
				id[t_indx].func(ap);
				sep = ", ";
			}
			t_indx++;
		}
		f_indx++;
	}
	putchar('\n');
	va_end(ap);
}

/**
 * f_char - Function to print char
 * @ap: Pointer to the argument
 */
void f_char(va_list ap)
{
	char c = va_arg(ap, int);

	printf("%c", c);
}

/**
 * f_int - Function to print int
 * @ap: Pointer to the argument
 */
void f_int(va_list ap)
{
	int i = va_arg(ap, int);

	printf("%d", i);
}

/**
 * f_float - Function to print float
 * @ap: Pointer to the argument
 */
void f_float(va_list ap)
{
	float f = va_arg(ap, double);

	printf("%f", f);
}

/**
 * f_str - Function to print string
 * @ap: Pointer to the argument
 */
void f_str(va_list ap)
{
	char *str = va_arg(ap, char *);

	if (str == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", str);
}
