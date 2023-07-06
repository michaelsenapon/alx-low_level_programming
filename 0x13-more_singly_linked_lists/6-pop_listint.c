#include "lists.h"

/**
 * pop_listint - Function deletes the head node of a linked list
 * 
 * Return: The head node's data
 */
int pop_listint(listint_t **head)
{
	 int n;
	 listint_t *temp = NULL;
	 listint_t *del = NULL;

	 if (*head == NULL)
		 return (0);
	 del = *head;
	 n = del->n;
	 temp = del->next;
	 free(del);
	 *head = temp;
	 return (n);
}
