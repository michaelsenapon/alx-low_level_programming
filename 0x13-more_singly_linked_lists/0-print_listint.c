#include "lists.h"

/**
 * print_listint - Prints all the elements of a linked list
 * @h: Pointer to the first node of the linked list
 *
 * Return: Number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int i = 0;
	const listint_t *trav = h;

	for (; trav; i++)
	{
		printf("%d\n", trav->n);
		trav = trav->next;
	}
	return (i);
}
