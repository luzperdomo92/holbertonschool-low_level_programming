#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 * Return: no return, just free.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *tmp;
	unsigned long int i;

	if (!ht)
		return;
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
		{
			while (ht->array[i])
			{
				tmp = ht->array[i];
				free(tmp->key);
				free(tmp->value);
				ht->array[i] = ht->array[i]->next;
				free(tmp);
			}
		}
	}
	free(ht->array);
	free(ht);
}
