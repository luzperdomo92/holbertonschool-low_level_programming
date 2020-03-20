#include "lists.h"
/**
 * free_list - free the allocate memory
 * @head: start of the linked list
 * Return: no return, just free.
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
