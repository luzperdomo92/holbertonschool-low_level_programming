#include "lists.h"
/**
 * free_listint2 - frees a listint_t list.
 * @head: parameter to be set.
 * Return: No return, just free , head equal to null
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t tmp_dir;

	while (*head != NULL)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
		free(tmp_dir);
	}
}
