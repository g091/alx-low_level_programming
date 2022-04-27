#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - inserts a node
 * @head: head node
 * @idx: index
 * @n: integer
 * Return: listint
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *new_node = *head;
	unsigned int i = 0;

	if (!new)
		return (free(new), NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL && idx > 0)
	{
		free(new);
		return (NULL);
	}
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (; i < idx - 1; i++)
	{
		new_node = new_node->next;
		if (new_node == NULL && idx - i > 0)
		{
			free(new);
			return (NULL);
		}
	}
	new->next = new_node->next;
	new_node->next = new;
	return (new);
}
