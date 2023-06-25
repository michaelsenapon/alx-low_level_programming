#include "3-calc.h"
#include <stdlib.h>
#include <string.h>

/**
 * get_op_func - Function that get the correct function to perform
 * @s: The operator passed as argument to the program
 *
 * Return: Pointer to the function that match operator passed
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
		if (strcmp(ops[i].op, s) == 0)
		{
			return (ops[i].f);
		}
		i++;
	}
	return (0);
}
