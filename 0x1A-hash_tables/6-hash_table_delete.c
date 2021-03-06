#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 * Return: no return, just free.
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int i;
	hash_node_t *node_del;
	hash_node_t *temp;

	if (!ht || !(ht->array))
		return;

	for (i = 0; i < ht->size; i++)
	{
		node_del = ht->array[i];
		while (node_del)
		{
			temp = node_del->next;
			free(node_del->key);
			free(node_del->value);
			free(node_del);
			node_del = temp;

		}
	}
	free(ht->array);
	free(ht);
}
