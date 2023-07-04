#include <stdlib.h>
#include "lists.h"

/**
  * free_list - Function that frees a list
  * @head: The pointer to the first node of linked list
  *
  * Return: void
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}

	free(head);
}
