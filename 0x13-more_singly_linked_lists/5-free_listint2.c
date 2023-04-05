#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - frees up the linked list
 *
 *@head:  pointer to the linked list
 *
 *Author Emmanuel Njenga
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *next;

	if (!head)
		return;

	while (*head != NULL)

	{
		next = *head;
		*head = (*head)->next;
		free(next);

	}
}
