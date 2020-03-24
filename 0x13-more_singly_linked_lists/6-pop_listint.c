#include "lists.h"
/**
 * pop_listint -  deletes the head node
 * @head: parameter to be set.
 * Return: the head node’s data (n).
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (*head == NULL)
	{
		return (0);
	}
	tmp = *head;
	*head = tmp->next;
	n = tmp->n;

	free(tmp);
	return (n);
}
