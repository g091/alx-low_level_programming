#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * listint_len - returns the no. of the elements in the node
 * @h: head of a list.
 * Return: no of nodes.
 */

size_t listint_len(const listint_t *h)
{
	size_t newnode = 0;

	while (h != NULL)
	{
		h = h->next;
		newnode++;
	}
	return (newnode);
}
