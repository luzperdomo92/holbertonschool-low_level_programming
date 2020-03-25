#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the nodes at the index
 * @head: head of the listint
 * @index: is the index of the list
 * Return: one (1) if it succeed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *node_before_index;
	listint_t *tmp_head = *head;

	while (tmp_head != NULL)
	{
		if (count == index)
		{
			if (node_before_index != NULL)
			{
				node_before_index->next = tmp_head->next;
			}
			else
			{
				*head = tmp_head->next;
			}
			free(tmp_head);
			return (1);
		}

		node_before_index = tmp_head;
		tmp_head = tmp_head->next;
		count++;
	}

	return (-1);
}
