#include "main.h"

/**
 * set_string - Function that sets the value of a pointer to a char
 * @s: Pointer to a string pointer
 * @to: Pointer to the string to be reset
 */
void set_string(char **s, char *to)
{
	*s = to;
}
