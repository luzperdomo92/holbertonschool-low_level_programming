#include "lists.h"
/**
 * listint_len - returns the number of elements struct listint_t
 * @h: is the pointer
 * Return: the number of elements.
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
