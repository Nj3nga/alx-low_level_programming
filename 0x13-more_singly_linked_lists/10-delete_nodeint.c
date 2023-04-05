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
	unsigned int i;
	listint_t *current_node, *previous_node;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		current_node = *head;
		*head = (*head)->next;
		free(current_node);
		return (1);
	}

	previous_node = NULL;
	current_node = *head;

	for (i = 0; i < index && current_node != NULL; i++)
	{
		previous_node = current_node;
		current_node = current_node->next;
	}
	if (current_node == NULL)
		return (-1);
	previous_node->next = current_node->next;
	free(current_node);
	return (1);
}
