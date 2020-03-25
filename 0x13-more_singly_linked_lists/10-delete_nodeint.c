#include "lists.h"
/**
 * delete_nodeint_at_index -  deletes the nodes at the index
 * @head: head of the listint
 * @index: is the index of the list
 * Return: one (1) if it succeed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count = -1;
	listint_t *tmp_head = *head;
	listint_t *node_after_index;

	  while(tmp_head != NULL)
	  {
		  if(count + 1 == index)
		  {
			  node_after_index = tmp_head->next;
			  free(tmp_head);
			  tmp_head = node_after_index;
			  if (count + 1 == 0)
			  {
				  *head = tmp_head;
			  }
			  return(1);
		  }

		  tmp_head = tmp_head->next;
		  count++;
	  }

  return(-1);
}
