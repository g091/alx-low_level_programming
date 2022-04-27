#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - adds all data in the list
 * @head: head nodo
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->next != NULL)
		{
			sum += head->n;
			head = head->next;
		}
		sum += head->n;
		return (sum);
	}
	return (sum);
}
