#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be added or updated
 * @key: input key & it shouldn't be empty
 * @value: value associated with the key
 * Return: 1 if it succeeds, 0 if fails
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx = 0;
	hash_node_t *el = NULL, *new_n = NULL;

	if (ht == NULL || key == NULL || (strcmp(key, "") == 0))
		return (0);
	idx = key_index((unsigned char *) key, ht->size);
	el = ht->array[idx];

	if (el && strcmp(key, el->key) == 0)
	{
		free(el->value);
		el->value = strdup(value);
		return (1);
	}
	new_n = malloc(sizeof(hash_node_t));
	if (new_n == NULL)
		return (0);
	new_n->key = strdup(key);
	new_n->value = strdup(value);
	new_n->next = ht->array[idx];
	ht->array[idx] = new_n;
	return (1);
}
