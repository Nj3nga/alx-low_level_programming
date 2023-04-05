#include <stdio.h>
#include "lists.h"

/**
  * get_nodeint_at_index - returns the nth node of a listint_t linked list.
  * @head: pointer to the first node in the linked list
  * @index: index of the node, starting at 0
  *
  *Author Njenga
  *
  *Return: pointer to the indexed node
  */


listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	if (head == NULL)
		return (NULL);

	for (node = 0; node < index; node++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
