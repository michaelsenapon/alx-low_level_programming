#include "lists.h"

/**
 * add_node_end - Function adds a new node at the end of a linked list
 * @head: Head node
 * @str: String data to add
 *
 * Return: Pointer to the address of the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *iter = *head;

	/* Allocate memory & check NULL for new node */
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	/* Insert str and len elements of the node */
	 new->str = strdup(str);
	 new->len = strlen(str);
	 new->next = NULL;

	/* Traverse the linked list to the last node */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (iter->next != NULL)
		iter = iter->next;

	/* Make New node the last node */
	iter->next = new;
	return (new);
}
