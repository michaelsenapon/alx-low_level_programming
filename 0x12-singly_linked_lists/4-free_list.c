#include "lists.h"

/**
 * free_list - Function that frees a linked list
 * @head: Head node of the linked list
 */
void free_list(list_t *head)
{
	list_t *rem;

	while (head)
	{
		rem = head;
		head = head->next;
		free(rem->str);
		free(rem);
	}
	free(head);
}
