#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - adds a node at the end
 * @head: pointer to the head of the
 * doubly linked list
 * @n: value to be added to the node
 * Return: a pointer to the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *last = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (*head == NULL)
	{
		new->next  = *head;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;
	return (new);
}
