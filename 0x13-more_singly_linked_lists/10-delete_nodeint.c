#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * delete_nodeint_at_index - deletes the node at index index
 * of a listint_t linked list.i
 *
 * @head: double pointer to the first node in the linked  list
 *
 * @index: index of the node to delete
 *
 *Author Njenga
 *
 * Return: pointer to the indexed node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *copy = *head;
	unsigned int node;

	if (copy == NULL)
		return (-1);

	if (index == 0)
		{
			*head = (*head)->next;
			free(copy);
			return (1);
		}

	for (node = 0; node < (index - 1); node++)
		{
			if (copy->next == NULL)
				return (-1);

			copy = copy->next;
		}

	tmp = copy->next;
	copy->next = tmp->next;
	free(tmp);
	return (1);
}
