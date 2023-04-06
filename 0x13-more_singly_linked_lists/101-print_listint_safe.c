#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * print_listint_safe -  prints a listint_t linked list.
 * @head: pointer to the beginning
 *
 * Author Njenga
 *
 *Return: returns number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t node = 0;
	long int res;

	while (head)
	{
		res = head - head->next;
		node++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (res > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (node);
}
