#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - function that returns the nth node of a linked
 * list
 * @head: head pointer of the linked list
 * @index: the index of the node on target
 *
 * Return: the target node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;

	if (head == NULL)
		return (NULL);

	while (head)
	{
		if (k == index)
			return (head);

		head = head->next;
		k++;
	}
	return (NULL);
}

