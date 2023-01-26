#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - function that adds a node at the
 * end of the list
 * @head: head of the list
 * @str: string to be stored in the node
 * Return: the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *tail = (*head);

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (tail->next != NULL)
	{
		tail = tail->next;
	}
	tail->next = new;
	return (new);

}
