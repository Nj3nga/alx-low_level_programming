#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
  * pop_listint - deletes the head node of a listint_t linked list
  * @head pointer to the head of the linked  list
  *
  *Author Njenga
  *
  * Return: the head node's data (n).
  */


int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (*head == NULL)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (num);
}
