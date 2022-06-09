#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - frees the doubly linked list
 * @head: head node
 * Return: freed list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
