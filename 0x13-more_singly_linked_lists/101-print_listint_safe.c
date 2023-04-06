#include <stdio.h>
#include "lists.h"
#include <stdlib.h>


/**
 * _r - reallocates memory for an array of pointers
 * to the nodes in a linked list
 *
 * @list: the old list to append
 *
 * @size: size of the new list (always one more than the old list)
 *
 * @new: new node to add to the list
 *
 *Author Njenga
 *
 * Return: pointer to the new list
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
