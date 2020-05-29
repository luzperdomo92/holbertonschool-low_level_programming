#include "hash_tables.h"

/**
 *  hash_table_get - retrieves a value associated with a key.
 * @ht: A pointer to the hash table.
 * @key: The key to get the index of.
 *
 * Return: value associated with the element,
 * or NULL if key couldn’t be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *value_search;

	if (ht == NULL || key == NULL)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);

	value_search = ht->array[index];
	while (value_search)
	{
		if (value_search->key == key)
			return (value_search->value);
		value_search = value_search->next;
	}
	return (NULL);
}

