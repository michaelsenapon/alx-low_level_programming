#include "lists.h"

/**
 * free_list - Function that frees a linked list
 * @head: Head node of the linked list
 */
void free_list(list_t *head)
{
	list_t *end = head;
	list_t *prev;

	for (;;)
	{
		if (head->next == NULL)
			break;
		while (end->next)
		{
			prev = end;
			end = end->next;
		}
		prev->next = NULL;
		free(end->str);
		free(end);
		end = head;
	}
	free(head->str);
	free(head);
}
