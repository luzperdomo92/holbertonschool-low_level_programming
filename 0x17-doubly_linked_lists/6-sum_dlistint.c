#include "lists.h"
/**
 * sum_dlistint -  sum of all the data (n).
 * @head: parameter to be set.
 * Return: the sum of all the data (n).
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
