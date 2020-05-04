#include "lists.h"
/**
 * delete_dnodeint_at_index -  deletes the nodes at the index
 * @head: head of the listint
 * @index: is the index of the list
 * Return: one (1) if it succeed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *node_next, *node_prev;
  dlistint_t *tmp_head = *head;

	while (tmp_head != NULL)
	{
		if (count == index)
		{
			node_next = tmp_head->next;
			node_prev = tmp_head->prev;
			if (node_prev != NULL)
				node_prev->next = node_next;
			if (node_next != NULL)
				node_next->prev = node_prev;
			free(tmp_head);
			if (index == 0)
				*head = node_next;
			return (1);
		}

		tmp_head = tmp_head->next;
		count++;
	}

	return (-1);
}
