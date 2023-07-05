#include "lists.h"

/**
 * print_pre_main - Function print text before main execute
 */
void __attribute__((constructor)) print_pre_main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
