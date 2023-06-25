#ifndef _VARIADIC_FUNCTIONS_H_
#define _VARIADIC_FUNCTIONS_H_

#include <stdarg.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * struct pf - Structure pf
 * @c: Format identifier
 * @f: The function associated
 */
typedef struct p_f
{
	char ch;
	void (*func)(va_list ap);
} f_type;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void f_char(va_list ap);
void f_int(va_list ap);
void f_float(va_list ap);
void f_str(va_list ap);
void print_separator(char c, int n);

#endif /* _VARIADIC_FUNCTIONS_H_ */
