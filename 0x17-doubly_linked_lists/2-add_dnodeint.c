#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beginning of a list_t list
 * @head: start of the linked list
 * @n: integer to be set as attribute of the next head.
 * Return: the new node inserted.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *head_node = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	if (head_node != NULL)
	{
		head_node->prev = new;
	}
	new->next = *head;
	*head = new;

	return (new);
}
