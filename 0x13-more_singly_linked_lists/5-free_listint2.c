#include "lists.h"

/**
 * free_listint2 - Function that free allocated memories in a linked list
 * @head: Pointer to pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp = NULL;
	listint_t *trav = NULL;

	if (head == NULL)
		return;

	trav = *head;

	while (trav)
	{
		temp = trav;
		trav = trav->next;
		free(temp);
	}
	*head = NULL;
}
