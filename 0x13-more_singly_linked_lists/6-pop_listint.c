#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - deletes the head node
 * @head: head of a list
 * Return: data of head node
 */

int pop_listint(listint_t **head)
{
	int h_node;
	listint_t *h;
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	ptr = *head;
	h_node = ptr->n;
	h = ptr->next;
	free(ptr);
	*head = h;
	return (h_node);
}
