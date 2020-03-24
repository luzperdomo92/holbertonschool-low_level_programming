#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 * @head: start of the linked list
 * @n: parameter to be set.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node_end;
	listint_t *tmp;

	new_node_end = malloc(sizeof(listint_t));

	if (new_node_end == NULL)
	{
		return (NULL);
	}
	new_node_end->n = n;

	if (*head == NULL)
	{
		*head = new_node_end;
		return (new_node_end);
	}

	tmp = *head;

	while (tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node_end;
	return (new_node_end);
}
