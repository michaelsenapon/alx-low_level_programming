#include "lists.h"

/**
 * listint_len - Function compute the number of elements in a linked list
 * @h: Pointer to the First node
 *
 * Return: Number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	int i = 0;
	const listint_t *trav = h;

	for (; trav; i++)
		trav = trav->next;
	return (i);
}
