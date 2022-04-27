#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_nodeint_at_index - deletes a node
 * @head: head node
 * @index: index
 * Return: integer
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *initial = *head;
	listint_t *n;

	if (!*head)
		return (-1);
	if (index == 0)
	{
		n = *head;
		*head = (*head)->next;
		free(initial);
		return (1);
	}
	while (initial)
	{
		if (i  == index - 1)
		{
			n = initial->next;
			initial->next = n->next;
			free(n);
			return (1);
		}
		initial = initial->next, i++;
	}
	return (-1);
}
