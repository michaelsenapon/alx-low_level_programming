#include "lists.h"

/**
 * free_listint2 - Function that free allocated memories in a linked list
 * @head: Pointer to pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *rm;
	listint_t *trav = *head;

	if (head == NULL)
		return;

	while (trav)
	{
		rm = trav;
		trav = trav->next;
		free(rm);
	}
	*head = NULL;
}
