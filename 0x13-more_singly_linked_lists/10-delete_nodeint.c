#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the nodes at the index
 * @head: head of the listint
 * @index: is the index of the list
 * Return: one (1) if it succeed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = -1;
	listint_t *node_after_index;

	while (*head != NULL)
	{
		if (count + 1 == index)
		{
			node_after_index = (*head)->next;
			free(*head);
			*head = node_after_index;
			return (1);
		}

		head = &(*head)->next;
		count++;
	}

	return (-1);
}
