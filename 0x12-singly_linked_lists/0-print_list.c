#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * print_list - Prints all the elements of a list_t list
 * @h: Pointer to head node
 *
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *l;

	l = h;
	while (l != NULL)
	{
		if (l->str == NULL)
		{
			printf("[0] (nil)\n");
			l = l->next;
			n++;
			continue;
		}
		printf("[%d] %s\n", l->len, l->str);
		l = l->next;
		n++;
	}
	return (n);
}
