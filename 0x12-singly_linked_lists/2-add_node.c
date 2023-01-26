#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - function thad adds a node at the begining
 * of the list
 * @head: the head of the linked list
 * @str: value to be stored at the node
 * Return: address of the element
 */


list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));

	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = (*head);
	*head = new;

	return (*head);
}
