#include <stdio.h>
#include "lists.h"


/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 * @head: pointer to a pointer to the beginning of a listint_t list
 * @n: element to be added to the listint_t list
 *
 *Author : Emmanuel Njenga
 *
 * Return: address of new node
 */


listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	new->next = *head;

	*head = new;

	return (new);
}
