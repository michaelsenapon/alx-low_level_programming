#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all - Function that prints anything
 * @format: List of types of arguments passed to the function
 * @...: Elipses (Other hidden argumens)
 */
void print_all(const char * const format, ...)
{
	int j, k;
	char *str;
	int char_c;
	double float_f;
	char id[] = "cifs";
	va_list ap;

	/* Call va_start to initialize the last optional param */
	va_start(ap, format);

	j = 0;
	while (format[j])
	{
		k = 0;
		while (id[k])
		{
			if (id[k] == format[j])
			{
				if (j != 0 && format[j])
					printf(", ");
			}
			k++;
		}
		switch (format[j])
		{
			case 'c':
				char_c = va_arg(ap, int);
				printf("%c",char_c);
				j++;
				break;
			case 'i':	
				printf("%d", va_arg(ap, int));
				j++;
				break;
			case 'f':
				float_f = va_arg(ap, double);
				printf("%f", float_f);
				j++;
				break;
			case 's':
				str = va_arg(ap, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				j++;
				break;
			default:
				j++;
				break;
		}
	}
	putchar('\n');
	va_end(ap);
}
