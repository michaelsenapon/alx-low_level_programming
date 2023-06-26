#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>


void print_all(const char * const format, ...)
{
	int t_indx, f_indx; 
	char *sep = "";	
	va_list ap;

	f_type id[] =
	{	
		{'c', f_char},
		{'i', f_int},
		{'f', f_float},
		{'s', f_str}
	};
	
	va_start(ap, format);
	
	f_indx = 0;
	while (format[f_indx] && format != NULL)
	{
		t_indx = 0;
		while (t_indx < 4)
		{
			if (format[f_indx] == id[t_indx].ch)
			{
				printf("%s", sep);
				id[t_indx].func(ap);
				sep = ", ";
				break;
			}
			t_indx++;
		}
		f_indx++;
	}
	putchar('\n');
}

void f_char(va_list ap)
{
	char c = va_arg(ap, int);
	printf("%c", c);
}

void f_int(va_list ap)
{
	int i = va_arg(ap, int);
	printf("%d", i);
}

void f_float(va_list ap)
{
	float f = va_arg(ap, double);
	printf("%f", f);
}

void f_str(va_list ap)
{
	char *str = va_arg(ap, char *);
	if (str == NULL)
		printf("(nil)");
	else
		printf("%s", str);
}
