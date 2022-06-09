#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - calculates sums all of the data of a doubly linked list
 * @head: head node
 * Return: sum of all the data (n) of a doubly linked list
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
