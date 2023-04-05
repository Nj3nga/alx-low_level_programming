#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * insert_nodeint_at_index - insert a new node in list at given position
 * @head:  pointer to head/first node in the list
 *
 * @idx: index position to add new node
 * @n:  integer value for new node.
 *
 * Return: return NULL if function fails.else new node address.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}


