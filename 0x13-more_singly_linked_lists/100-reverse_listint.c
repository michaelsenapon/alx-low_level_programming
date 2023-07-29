#include "lists.h"

/**
 * reverse_listint - Function reverses a linked list
 * @head: Pointer to the first element
 *
 * Return: Pointer to the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *rev, *temp, *prev;

	if (head == NULL)
		return (NULL);
	
	rev = *head;
	prev = NULL;

	while (rev != NULL)
	{
		temp = rev->next;
		rev->next = prev;
		prev = rev;
		rev = temp;
	}

	*head = prev;
	return (prev);
}
