#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements of a listint_t list.
  * @h: a pointer to the head of the linked list
  *
  * Return: the number of nodes in the list
  *
  * Description:function prints all elements of linked list of type listint_t.
  * Takes a pointer to head of the linked list as input, and iterates through
  * the list, printing value of each node and updating pointer to the next node
  * The function returns the number of nodes in the list.
  *
  */



size_t print_listint (const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
