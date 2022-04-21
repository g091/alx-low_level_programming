#include "lists.h"

/**
 * list_len - returns no. of elements
 * @h: pointer to struct
 * @el - element
 * Return: no. of elements
 */

size_t list_len(const list_t *h)
{
	int el;

	el = 0;

	while (h != NULL)
	{
		h = h->next;
		el++;
	}
	return (el);
}
