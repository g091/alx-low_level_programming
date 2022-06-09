#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at an index
 * @head: head node
 * @index: index at which to delete node
 * Return: 1 on success, -1 on failure
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *initial;
	unsigned int x;

	if (head == NULL || *head == NULL)
		return (-1);
	initial = *head;
	if (index == 0)
	{
		*head = initial->next;
		if (initial->next != NULL)
		{
			initial->next->prev = NULL;
		}
		free(initial);
		return (1);
	}
	for (x = 0; x < index; x++)
	{
		if (initial->next == NULL)
			return (-1);
		initial = initial->next;
	}
	initial->prev->next = initial->next;
	if (initial->next != NULL)
		initial->next->prev = initial->prev;
	free(initial);
	return (1);
}
