#include "lists.h"
/**
 * free_dlistint - free the allocate memory
 * @head: start of the linked list
 * Return: no return, just free.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
}
