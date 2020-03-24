#include "lists.h"
/**
 * insert_nodeint_at_index -  inserts a new node at a given position.
 * @head: head of the listint
 * @idx: is the index of the list where the new node should be added.
 * @n:position to be set.
 * Return: the addres of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;
	listint_t *new_node;
	listint_t *node_before_index;
	listint_t *tmp_head = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	while(tmp_head != NULL)
	{
		if(count == idx)
		{
			if (node_before_index != NULL)
			{
				node_before_index->next = new_node;
			}
			new_node->next = tmp_head;
			return(new_node);
		}

		node_before_index = tmp_head;
		tmp_head = tmp_head->next;
		count++;
	}

	free(new_node);
	return(NULL);
}
