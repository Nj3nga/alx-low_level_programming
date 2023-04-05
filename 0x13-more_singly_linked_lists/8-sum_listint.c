#include <stdio.h>
#include "lists.h"

/**
  *sum_listint - Calculate the sum of all the data of a listint_t linked list
  *
  *@head: pointer listint_int linked list
  *
  *Author Njenga
  *
  *Return: sum of all data (n) of a listint_t linked list
  */


int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
