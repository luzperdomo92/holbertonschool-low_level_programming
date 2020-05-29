#include "hash_tables.h"

/**
 * hash_table_delete - a function that deletes a hash table.
 * @ht: the hash table
 * Return: no return, just free.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_table_t *head = ht;
	hash_node_t *node_del;
	hash_node_t *tmp;
	unsigned long int i;

	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			node_del = ht->array[i];
			while (node_del != NULL)
			{
				tmp = node_del->next;
				free(node_del->key);
				free(node_del->value);
				free(node_del);
				node_del = tmp;
			}
		}
	}
	free(head->array);
}
