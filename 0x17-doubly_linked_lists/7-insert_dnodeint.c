#include "lists.h"
/**
 * insert_dnodeint_at_index -  inserts a new node at a given position.
 * @h: head of the listint
 * @idx: is the index of the list where the new node should be added.
 * @n:position to be set.
 * Return: the addres of new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *new_node;
	dlistint_t *tmp_head = *h;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (count == idx)
	{
		new_node->next = tmp_head;
		if (tmp_head != NULL)
			tmp_head->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (tmp_head != NULL)
	{
		if (count + 1 == idx)
		{
			new_node->next = tmp_head->next;
			tmp_head->prev = new_node;
			tmp_head->next = new_node;
			return (new_node);
		}
		tmp_head = tmp_head->next;
		count++;
	}

	return (NULL);
}
