#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * free_listint -  frees up the linked list.
 *
 * @head: pointer to the linked list to free
 *
 *Author: Emmanuel Njenga
 *
 * Return: void
 */


void free_listint(listint_t *head)
{
	listint_t *next;

	while (head != NULL)
	{
		next = head->next;

		free(head);

		head = next;
	}
}
