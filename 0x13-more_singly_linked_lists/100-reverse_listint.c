#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * reverse_listint - A function that reverses a listint_t linked list.
 * @head: double pointer to the linked list
 *
 * Author Njenga
 *
 * Return:  pointer to the head node of the reversed list
 *
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous, *next;

	if (head == NULL || *head == NULL)
		return (NULL);

	if ((*head)->next == NULL)
		return (*head);

	previous = NULL;


	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}


	*head = previous;

	return (*head);
}
