#include <stdio.h>
#include "lists.h"

/**
 * dlistint_len - counts the no. of nodes in the doubly linked list
 * @h: 1st node
 * Return: no. of nodes
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
		h = h->next;
	return (x);
}
