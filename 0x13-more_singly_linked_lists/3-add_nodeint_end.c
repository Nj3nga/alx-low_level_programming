#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * add_nodeint_end - Function adds a new node at the end of a listint_t list.
 * @head: pointer to the pointer to the beginning of the list
 * @n: elements to add to the list
 *
 *Author : Emmanuel Njenga
 *
 * Return: pointer to the new node
 */


listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *last_node;

	new_node = malloc(sizeof(listint_t));

	if (head == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	last_node = *head;
	while (last_node->next != NULL)
	{
		last_node = last_node->next;
	}
	last_node->next = new_node;

	return (new_node);
}
