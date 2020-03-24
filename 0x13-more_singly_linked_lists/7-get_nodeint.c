#include "lists.h"
/**
 * get_nodeint_at_index - print nth node of a listint.
 * @head: parameter to be set.
 *@index: index of the node
 * Return:  returns the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		if (count == index)
		{
			return (head);
		}
		count++;
		head = head->next;
	}
	return (head);
}
