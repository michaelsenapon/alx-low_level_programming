#include "lists.h"

/**
 * print_pre_main - Print before main
 *
 */
void __attribute__((constructor)) print_pre_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
