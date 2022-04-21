#include "lists.h"

/**
 * add_node - adds a node at the beginning of the list
 * @head: head pointer
 * @str: string
 * new_el - new element
 * Return: new node at the start
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	int new_el = 0;

	new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);

	while (str[new_el])
	{
		new_el++;
	}

	new_node->len = new_el;
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
