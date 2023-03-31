#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - add a new node to the beginning of the linked list
 * @head: double pointer to list_t list
 * @str: new string to add in node
 *
 * Return: address of new element, failure returns NULL
 */

list_t *add_node(list_t **head, const char *str)
{
list_t *new;
unsigned int len = 0;

while (str[len])
len++;

new = malloc(sizeof(list_t));
if (!new)
return (NULL);

new->str = strdup(str);
new->len = len;
new->next = (*head);
(*head) = new;

return (*head);
}
