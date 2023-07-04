#include "lists.h"
#include <string.h>

/**
 * add_node_end - Function that adds a new node at the end of a list
 * @head: pointer to a pointer to head of the list
 * @str: pointer to the string element of a the list
 *
 * Return: address of the new element or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;

	if (head != NULL && str != NULL)
	{
		list_t *last;

		new_node = malloc(sizeof(list_t));



		if (new_node == NULL)
			return (NULL);
		new_node->str = strdup(str);
		new_node->len = strlen(str);
		new_node->next = NULL;

		if (*head == NULL)
		{
			*head = new_node;
			return (*head);
		}
		else
		{
			last = *head;
			while (last->next)
				last = last->next;

			last->next = new_node;
			return (new_node);
		}
	}
	return (0);
}
