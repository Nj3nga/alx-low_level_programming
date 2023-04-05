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

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new_node, *current_node;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}
	current_node = *head;

	for (i = 0; i < idx - 1 && current_node != NULL; i++)
		current_node = current_node->next;

	if (current_node == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->next = current_node->next;
	current_node->next = new_node;
	return (new_node);
}
