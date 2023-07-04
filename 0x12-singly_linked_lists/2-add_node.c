#include "lists.h"

/**
 * add_node - Function that adds a new node at the beginning of a list
 * @head: Reference pointer to pointer to Head node
 * @str: String data in node
 *
 * Return: The address of the new element
 * Null if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	/* Allocate memory for new node */
	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	/* Assign data to new memory */
	new->str = strdup(str);
	new->len = strlen(str);

	/* Point new node's next pointer to head */
	new->next = *head;

	/* Make head points to new node */
	*head = new;

	return (new);

}
