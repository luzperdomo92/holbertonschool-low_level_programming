#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: start of the linked list
 * @n: parameter to be set.
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node_head;

	new_node_head = malloc(sizeof(listint_t));
	if (new_node_head == NULL)
	{
		return (NULL);
	}
	new_node_head->n = n;
	new_node_head->next = *head;
	*head = new_node_head;

	return (new_node_head);
}
