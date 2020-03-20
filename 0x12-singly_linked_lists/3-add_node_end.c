#include "lists.h"
/**
 * str_len -  length of the string
 * @string: string to be set.
 * Return: the number of nodes.
 */
int str_len(const char *string)
{
	int count = 0;

	while (string[count] != '\0')
	{
		count++;
	}
	return (count);
}
/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: start of the linked list
 * @str: string to be set as attribute of the next head.
 * Return: the number of nodes.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp;

	new = malloc(sizeof(list_t));
	if (new == NULL || str == NULL)
	{
		return (NULL);
	}

	new->str = strdup(str);
	new->len = str_len(str);

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next != NULL)
	{
		temp = temp->next;
	}

	temp->next = new;

	return (new);
}
