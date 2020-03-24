#include "lists.h"
/**
 * print_listint - prints all the elements of struct listint_t
 * @h: is the pointer
 * Return: the number of nodes.
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
