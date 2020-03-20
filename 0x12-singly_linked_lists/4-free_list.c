#include "lists.h"
/**
 * free_list - free the allocate memory
 * @head: start of the linked list
 * Return: no return, just free.
 */
void free_list(list_t *head)
{
	if (head == NULL)
		return;

	while (head)
	{
		free(head);
		head = head->next;
	}
}
