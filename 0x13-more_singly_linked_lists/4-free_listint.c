#include "lists.h"

/**
 * free_listint - Function that frees a linked list
 * @head: Pointer to the first node
 */
void free_listint(listint_t *head)
{
	listint_t *rm;
	listint_t *trav;

	trav = head;

	while (trav)
	{
		rm = trav;
		trav = trav->next;
		free(rm);
	}
	free(trav);
}
