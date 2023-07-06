#include "lists.h"

/**
 * free_listint2 - Function that free allocated memories in a linked list
 * @head: Pointer to pointer to the first node
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *trav;

	if (*head == NULL)
		return;

	trav = *head;
	
	while (trav)
	{
		temp = trav->next;
		free(trav);
		trav = temp;
	}
	*head = NULL;
}
