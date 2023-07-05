#include "lists.h"

/**
 * add_nodeint - Function add a new node at the beginning of the list
 * @head: Pointer to pointer to the head node (first node)
 * @n: element to add to the new node
 *
 * Return: Pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;

	*head = new;
	return (new);
}
