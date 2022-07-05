#include "hash_tables.h"
/**
 * hash_table_create - creates a hash table
 * @size: input size of a hash table
 * Return: pointer to the newly created hash table
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hT;

	if (size == 0)
	{
		return (NULL);
	}

	hT = malloc(sizeof(hash_table_t));
	if (hT == NULL)
	{
		return (NULL);
	}

	hT->size = size;
	hT->array = malloc(sizeof(hash_node_t *) * size);
	if (hT->array == NULL)
	{
		return (NULL);
	}

	return (hT);
}
