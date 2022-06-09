#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - gets a node at index of a doubly linked list
 * @head: head
 * @index: index of the node
 * Return: the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int x;

	if (head == NULL)
		return (NULL);
	if (index == 0)
		return (head);
	for (x = 0; x < index; x++)
	{
		if (head->next == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
