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

	if (!key || strcmp(key, "") == 0 || !ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);
	value_search = ht->array[index];

	for (; value_search != NULL; value_search = value_search->next)
	{
		if (strcmp(value_search->key, key) == 0)
			return (value_search->value);
	}
	return (NULL);
}

