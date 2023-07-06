#include "lists.h"

/**
 * add_nodeint_end - Function that adds a new node at end of linked list
 * @head: Pointer to pointer to first node (head)
 * @n: Integer element of the linked list
 *
 * Return: Pointer to the new element
 * Null if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL;
	listint_t *trav = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (trav->next)
		trav = trav->next;
	trav->next = new;
	return (new);
}
