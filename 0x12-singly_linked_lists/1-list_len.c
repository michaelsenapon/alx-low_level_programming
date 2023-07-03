#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to head node
 *
 * Return: Number of elements (nodes)
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;
	const list_t *l;

	l = h;
	while (l != NULL)
	{
		l = l->next;
		n++;
	}
	return (n);
}
