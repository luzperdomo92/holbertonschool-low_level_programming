#include "lists.h"
/**
 * free_listint -  frees a listint_t list.
 * @head: parameter to be set.
 * Return: the address of the new element, or NULL if it failed.
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
