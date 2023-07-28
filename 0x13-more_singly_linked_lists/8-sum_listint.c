#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - function that sum all data in a linked list
 * @head: head of the linked list
 *
 * Return: the sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
