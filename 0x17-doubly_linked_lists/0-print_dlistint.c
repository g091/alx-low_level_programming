#include <stdio.h>
#include "lists.h"

/**
 * print_dlistint - print all the elements of a doubly linked list
 * @h: pointer to the start of the linked list
 * Return: no. of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t x;

	for (x = 0; h != NULL; x++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (x);
}
