#include "hash_tables.h"
/**
 * @size: - size of the array
 *
 * Return:  pointer to the newly created hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
    hash_table_t *hash_table;
    int iter;

    hash_table = malloc(sizeof(hash_table_t));
    if (hash_table == NULL)
        return (NULL);

    hash_table->size = size;
    hash_table->array = malloc(sizeof(hash_node_t *) * size);
	if (hash_table->array == NULL)
		return (NULL);

    for (iter = 0; iter < size ; iter++)
        hash_table->array[iter] = NULL;
	
	return (hash_table);
}
