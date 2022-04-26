#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints the elements of a list
 * @h: head of a list
 * Return: numbers of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t newnode = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		newnode++;
	}
	return (newnode);
}
