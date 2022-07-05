#include "hash_tables.h"
/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: hash table
 * @key: key to be found
 * Return: value associated with elment or NULL if key isn't found
 */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx = 0;
	hash_node_t *chk;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((const unsigned char *) key, ht->size);
	chk = ht->array[idx];
	while (chk != NULL)
	{
		if (strcmp(key, chk->key) == 0)
			return (chk->value);
		chk = chk->next;
	}
	return (NULL);
}
