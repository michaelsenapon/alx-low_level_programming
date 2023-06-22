#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Function that prints a name
 * @name: String name to print
 * @f: Pointer that points to the function that prints the name
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
